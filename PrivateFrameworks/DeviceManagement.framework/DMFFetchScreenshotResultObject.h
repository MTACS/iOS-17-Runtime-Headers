
@interface DMFFetchScreenshotResultObject : CATTaskResultObject {
    NSData * _screenshotData;
}

@property (nonatomic, readonly) NSData *screenshotData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)screenshotData;

@end
