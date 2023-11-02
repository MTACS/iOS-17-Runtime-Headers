
@interface GTReplayConfiguration : NSObject <NSSecureCoding> {
    bool  _disableHeapTextureCompression;
    bool  _disableOptimizeRestores;
    bool  _enableCapture;
    bool  _enableDisplayOnDevice;
    bool  _enableHUD;
    bool  _enableReplayFromOtherPlatforms;
    bool  _enableStopOnError;
    bool  _enableValidation;
    bool  _forceLoadActionClear;
    bool  _forceLoadUnusedResources;
    bool  _forceWaitUntilCompleted;
}

@property (nonatomic) bool disableHeapTextureCompression;
@property (nonatomic) bool disableOptimizeRestores;
@property (nonatomic) bool enableCapture;
@property (nonatomic) bool enableDisplayOnDevice;
@property (nonatomic) bool enableHUD;
@property (nonatomic) bool enableReplayFromOtherPlatforms;
@property (nonatomic) bool enableStopOnError;
@property (nonatomic) bool enableValidation;
@property (nonatomic) bool forceLoadActionClear;
@property (nonatomic) bool forceLoadUnusedResources;
@property (nonatomic) bool forceWaitUntilCompleted;

+ (bool)supportsSecureCoding;

- (bool)disableHeapTextureCompression;
- (bool)disableOptimizeRestores;
- (bool)enableCapture;
- (bool)enableDisplayOnDevice;
- (bool)enableHUD;
- (bool)enableReplayFromOtherPlatforms;
- (bool)enableStopOnError;
- (bool)enableValidation;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceLoadActionClear;
- (bool)forceLoadUnusedResources;
- (bool)forceWaitUntilCompleted;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDisableHeapTextureCompression:(bool)arg1;
- (void)setDisableOptimizeRestores:(bool)arg1;
- (void)setEnableCapture:(bool)arg1;
- (void)setEnableDisplayOnDevice:(bool)arg1;
- (void)setEnableHUD:(bool)arg1;
- (void)setEnableReplayFromOtherPlatforms:(bool)arg1;
- (void)setEnableStopOnError:(bool)arg1;
- (void)setEnableValidation:(bool)arg1;
- (void)setForceLoadActionClear:(bool)arg1;
- (void)setForceLoadUnusedResources:(bool)arg1;
- (void)setForceWaitUntilCompleted:(bool)arg1;

@end
