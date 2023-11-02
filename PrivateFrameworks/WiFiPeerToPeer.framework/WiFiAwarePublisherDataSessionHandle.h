
@interface WiFiAwarePublisherDataSessionHandle : NSObject <NSSecureCoding> {
    unsigned char  _datapathID;
    WiFiMACAddress * _initiatorDataAddress;
}

@property (nonatomic, readonly) unsigned char datapathID;
@property (nonatomic, readonly) WiFiMACAddress *initiatorDataAddress;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)datapathID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatapathID:(unsigned char)arg1 initiatorDataAddress:(id)arg2;
- (id)initiatorDataAddress;
- (bool)isEqual:(id)arg1;

@end
