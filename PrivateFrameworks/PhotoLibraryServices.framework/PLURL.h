
@interface PLURL : NSURL {
    _Atomic unsigned short  _ssbCounter;
}

- (void)dealloc;
- (id)replacementObjectForCoder:(id)arg1;
- (bool)startAccessingSecurityScopedResource;
- (void)stopAccessingSecurityScopedResource;

@end
