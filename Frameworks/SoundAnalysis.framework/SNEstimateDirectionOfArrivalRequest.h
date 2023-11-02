
@interface SNEstimateDirectionOfArrivalRequest : NSObject <NSCopying, NSSecureCoding, SNAnalyzerCreating, SNRequest> {
    NSArray * _spatialSpectrum;
    NSString * _tuningPrefix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *spatialSpectrum;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createAnalyzerWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTuningPrefix:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)spatialSpectrum;

@end
