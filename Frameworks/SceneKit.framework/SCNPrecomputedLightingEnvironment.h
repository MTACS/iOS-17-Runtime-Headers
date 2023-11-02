
@interface SCNPrecomputedLightingEnvironment : NSObject <NSSecureCoding> {
    NSData * _irradianceData;
    NSData * _radianceData;
}

@property (nonatomic, retain) NSData *irradianceData;
@property (nonatomic, retain) NSData *radianceData;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)irradianceData;
- (id)radianceData;
- (void)setIrradianceData:(id)arg1;
- (void)setRadianceData:(id)arg1;

@end
