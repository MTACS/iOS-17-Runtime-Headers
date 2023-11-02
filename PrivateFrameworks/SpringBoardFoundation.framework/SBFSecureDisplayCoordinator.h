
@interface SBFSecureDisplayCoordinator : NSObject {
    bool  _inSecureMode;
}

@property (getter=inSecureMode, nonatomic) bool secureMode;

- (bool)inSecureMode;
- (void)setSecureMode:(bool)arg1;
- (void)setSecureMode:(bool)arg1 postNotification:(bool)arg2;

@end
