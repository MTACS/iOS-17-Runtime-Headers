
@interface AEAssessmentUIConfiguration : NSObject <NSSecureCoding> {
    bool  _captureDisplays;
    bool  _presentDisplayShields;
}

@property (getter=shouldCaptureDisplays, nonatomic, readonly) bool captureDisplays;
@property (getter=shouldPresentDisplayShields, nonatomic, readonly) bool presentDisplayShields;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresentDisplayShields:(bool)arg1 captureDisplays:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)shouldCaptureDisplays;
- (bool)shouldPresentDisplayShields;

@end
