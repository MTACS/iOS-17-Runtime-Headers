
@interface MRDiscoveredGroupSession : NSObject <NSSecureCoding> {
    MRGroupSessionPersonInformation * _hostInfo;
    NSString * _identifier;
    unsigned char  _routeType;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) MRGroupSessionPersonInformation *hostInfo;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned char routeType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hostInfo;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithIdentifier:(id)arg1 hostInfo:(id)arg2 routeType:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned char)routeType;

@end
