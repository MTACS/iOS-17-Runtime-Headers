
@interface BKFaceWUPoseEligibilityInfo : NSObject {
    bool  _isEligible;
}

@property (nonatomic, readonly) bool isEligible;

- (id)initWithDictionary:(id)arg1;
- (bool)isEligible;

@end
