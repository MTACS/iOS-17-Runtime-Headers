
@interface STSCHWiFiAwareDiscoveryChannelInfo : NSObject <NSSecureCoding> {
    NSNumber * _channelNumber;
    NSNumber * _operatingClass;
    NSNumber * _supportedBands;
}

@property (nonatomic, retain) NSNumber *channelNumber;
@property (nonatomic, retain) NSNumber *operatingClass;
@property (nonatomic, retain) NSNumber *supportedBands;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asData;
- (id)channelNumber;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSupportedBands:(id)arg1 operatingClass:(id)arg2 channelNumber:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)operatingClass;
- (void)setChannelNumber:(id)arg1;
- (void)setOperatingClass:(id)arg1;
- (void)setSupportedBands:(id)arg1;
- (id)supportedBands;

@end
