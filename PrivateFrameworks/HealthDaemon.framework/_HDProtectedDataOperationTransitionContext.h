
@interface _HDProtectedDataOperationTransitionContext : NSObject {
    long long  _newState;
    long long  _oldState;
}

@property (nonatomic, readonly) bool hasNewState;
@property (nonatomic) long long newState;
@property (nonatomic) long long oldState;

- (bool)hasNewState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)newState;
- (long long)oldState;
- (void)setNewState:(long long)arg1;
- (void)setOldState:(long long)arg1;

@end
