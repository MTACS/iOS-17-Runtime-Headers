
@interface AXSDKShotDetector : AXSDDetector <NSSecureCoding> {
    NSString * _customName;
    NSString * _kshotCategory;
}

@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *name;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRecording:(id)arg1;
- (id)category;
- (unsigned long long)compatibilityVersion;
- (unsigned long long)contentVersion;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isCustom;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToKShotDetector:(id)arg1;
- (bool)isModelReady;
- (bool)isTrainingComplete;
- (id)modelURLString;
- (id)name;
- (id)recordings;
- (void)setCategory:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRecordings:(id)arg1;

@end
