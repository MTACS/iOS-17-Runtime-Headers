
@interface SBInvalidateItemContainerBackdropEventResponse : SBSwitcherModifierEventResponse {
    long long  _updateMode;
}

@property (nonatomic, readonly) long long updateMode;

- (id)initWithUpdateMode:(long long)arg1;
- (long long)type;
- (long long)updateMode;

@end
