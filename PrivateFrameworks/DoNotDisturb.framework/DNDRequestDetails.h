
@interface DNDRequestDetails : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _auditUUID;
    NSString * _clientIdentifier;
    unsigned long long  _timestamp;
}

@property (nonatomic, readonly, copy) NSUUID *auditUUID;
@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly) unsigned long long timestamp;

+ (id)detailsRepresentingNowWithClientIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)auditUUID;
- (id)clientIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClientIdentifier:(id)arg1 auditUUID:(id)arg2 timestamp:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)timestamp;

@end
