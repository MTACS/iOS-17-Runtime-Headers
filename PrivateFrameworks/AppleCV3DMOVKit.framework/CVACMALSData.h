
@interface CVACMALSData : NSObject <NSSecureCoding> {
    CVACLMotionTypeDoubleVector3 * _colorComponents;
    unsigned long long  _frameId;
    NSNumber * _gain;
    NSNumber * _integrationTime;
    unsigned int  _luxValue;
    CVACLMotionTypeVector4 * _rawChannels;
    unsigned long long  _syncTimestamp;
    double  _timestamp;
    NSArray * _vendorAZOffsets;
    float  _vendorCCT;
    unsigned int  _vendorIntegrationTime;
    float  _vendorLux;
    unsigned int  _vendorNumChannels;
    unsigned char  _vendorOrientation;
    NSArray * _vendorRawChannels;
    unsigned int  _vendorReportInterval;
    unsigned int  _vendorStatus;
    float  _vendorTemperature;
}

@property (nonatomic, retain) CVACLMotionTypeDoubleVector3 *colorComponents;
@property (nonatomic) unsigned long long frameId;
@property (nonatomic, retain) NSNumber *gain;
@property (nonatomic, retain) NSNumber *integrationTime;
@property (nonatomic) unsigned int luxValue;
@property (nonatomic, retain) CVACLMotionTypeVector4 *rawChannels;
@property (nonatomic) unsigned long long syncTimestamp;
@property (nonatomic) double timestamp;
@property (nonatomic, retain) NSArray *vendorAZOffsets;
@property (nonatomic) float vendorCCT;
@property (nonatomic) unsigned int vendorIntegrationTime;
@property (nonatomic) float vendorLux;
@property (nonatomic) unsigned int vendorNumChannels;
@property (nonatomic) unsigned char vendorOrientation;
@property (nonatomic, retain) NSArray *vendorRawChannels;
@property (nonatomic) unsigned int vendorReportInterval;
@property (nonatomic) unsigned int vendorStatus;
@property (nonatomic) float vendorTemperature;

+ (id)classes;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)colorComponents;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)frameId;
- (id)gain;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)integrationTime;
- (unsigned int)luxValue;
- (id)rawChannels;
- (void)setColorComponents:(id)arg1;
- (void)setFrameId:(unsigned long long)arg1;
- (void)setGain:(id)arg1;
- (void)setIntegrationTime:(id)arg1;
- (void)setLuxValue:(unsigned int)arg1;
- (void)setRawChannels:(id)arg1;
- (void)setSyncTimestamp:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVendorAZOffsets:(id)arg1;
- (void)setVendorCCT:(float)arg1;
- (void)setVendorIntegrationTime:(unsigned int)arg1;
- (void)setVendorLux:(float)arg1;
- (void)setVendorNumChannels:(unsigned int)arg1;
- (void)setVendorOrientation:(unsigned char)arg1;
- (void)setVendorRawChannels:(id)arg1;
- (void)setVendorReportInterval:(unsigned int)arg1;
- (void)setVendorStatus:(unsigned int)arg1;
- (void)setVendorTemperature:(float)arg1;
- (unsigned long long)syncTimestamp;
- (double)timestamp;
- (id)vendorAZOffsets;
- (float)vendorCCT;
- (unsigned int)vendorIntegrationTime;
- (float)vendorLux;
- (unsigned int)vendorNumChannels;
- (unsigned char)vendorOrientation;
- (id)vendorRawChannels;
- (unsigned int)vendorReportInterval;
- (unsigned int)vendorStatus;
- (float)vendorTemperature;

@end
