
@interface SidecarResponse : SidecarRequest {
    _Atomic bool  _accepted;
}

- (void)_willConnect;
- (void)accept;
- (void)sendItems:(id)arg1;

@end
