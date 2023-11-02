
@interface SUCoreMAIdentifier : NSObject <NSSecureCoding> {
    NSData * _measurement;
    NSString * _measurementAlgorithm;
    NSString * _productBuildVersion;
    NSString * _productVersion;
    NSString * _releaseType;
}

@property (nonatomic, retain) NSData *measurement;
@property (nonatomic, retain) NSString *measurementAlgorithm;
@property (nonatomic, retain) NSString *productBuildVersion;
@property (nonatomic, retain) NSString *productVersion;
@property (nonatomic, retain) NSString *releaseType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductVersion:(id)arg1 productBuildVersion:(id)arg2 releaseType:(id)arg3 measurement:(id)arg4 measurementAlgorithm:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)measurement;
- (id)measurementAlgorithm;
- (id)productBuildVersion;
- (id)productVersion;
- (id)releaseType;
- (void)setMeasurement:(id)arg1;
- (void)setMeasurementAlgorithm:(id)arg1;
- (void)setProductBuildVersion:(id)arg1;
- (void)setProductVersion:(id)arg1;
- (void)setReleaseType:(id)arg1;

@end
