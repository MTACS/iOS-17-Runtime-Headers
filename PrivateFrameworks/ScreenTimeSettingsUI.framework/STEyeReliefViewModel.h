
@interface STEyeReliefViewModel : NSObject {
    bool  _isEyeReliefEnabled;
}

@property (nonatomic) bool isEyeReliefEnabled;

- (void)acknowledgeIntroScreens;
- (bool)hasAcknowledgedIntroScreens;
- (bool)inDemoMode;
- (bool)isEyeReliefEnabled;
- (void)setIsEyeReliefEnabled:(bool)arg1;

@end
