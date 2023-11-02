
@interface CRKFetchScreenshotResultObject : CATTaskResultObject {
    NSData * _screenshotData;
    NSString * _studentIdentifier;
}

@property (nonatomic, copy) NSData *screenshotData;
@property (nonatomic, copy) NSString *studentIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)screenshotData;
- (void)setScreenshotData:(id)arg1;
- (void)setStudentIdentifier:(id)arg1;
- (id)studentIdentifier;

@end
