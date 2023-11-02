
@interface AFMyriadMetricsAdditionalContext : NSObject {
    unsigned char  _deviceClass;
    unsigned char  _deviceProductType;
    unsigned char  _goodnessScore;
    unsigned char  _rawGoodnessScore;
}

@property (nonatomic, readonly) unsigned char deviceClass;
@property (nonatomic, readonly) unsigned char deviceProductType;
@property (nonatomic, readonly) unsigned char goodnessScore;
@property (nonatomic, readonly) unsigned char rawGoodnessScore;

- (id)description;
- (unsigned char)deviceClass;
- (unsigned char)deviceProductType;
- (unsigned char)goodnessScore;
- (id)initWithRawGoodnessScore:(unsigned char)arg1 goodnessScore:(unsigned char)arg2 deviceClass:(unsigned char)arg3 deviceProductType:(unsigned char)arg4;
- (unsigned char)rawGoodnessScore;

@end
