
@interface MRGroupSessionInfo : NSObject <NSSecureCoding> {
    MRGroupSessionPersonInformation * _hostInfo;
    NSString * _identifier;
    bool  _isHosted;
    unsigned char  _routeType;
}

@property (nonatomic, readonly) MRGroupSessionPersonInformation *hostInfo;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isHosted;
@property (nonatomic, readonly) _MRGroupSessionInfoProtobuf *protobuf;
@property (nonatomic, readonly) unsigned char routeType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hostInfo;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 hostInfo:(id)arg2 routeType:(unsigned char)arg3 isHosted:(bool)arg4;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isHosted;
- (id)protobuf;
- (unsigned char)routeType;

@end
