
@interface CHAppLaunchSensorData : NSObject <NSSecureCoding> {
    NSString * _algorithmType;
    NSString * _bundleId;
    NSArray * _embeddingVector;
    NSString * _modelVersion;
    NSDate * _trainingDate;
}

@property (nonatomic, readonly) NSString *algorithmType;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSArray *embeddingVector;
@property (nonatomic, readonly) NSString *modelVersion;
@property (nonatomic, readonly) NSDate *trainingDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)algorithmType;
- (id)bundleId;
- (id)description;
- (id)embeddingVector;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleId:(id)arg1 embeddingVector:(id)arg2 modelVersion:(id)arg3 algorithmType:(id)arg4 trainingDate:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)modelVersion;
- (id)trainingDate;

@end
