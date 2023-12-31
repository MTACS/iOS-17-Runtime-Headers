
@interface SSScreenCaptureAbilityCheck : NSObject {
    bool  _isAbleToTakeScreenshots;
    NSString * _reasonForNotBeingAbleToTakeScreenshots;
}

@property (nonatomic) bool isAbleToTakeScreenshots;
@property (nonatomic, copy) NSString *reasonForNotBeingAbleToTakeScreenshots;

+ (id)abilityCheck;

- (void).cxx_destruct;
- (bool)isAbleToTakeScreenshots;
- (id)reasonForNotBeingAbleToTakeScreenshots;
- (void)setIsAbleToTakeScreenshots:(bool)arg1;
- (void)setReasonForNotBeingAbleToTakeScreenshots:(id)arg1;

@end
