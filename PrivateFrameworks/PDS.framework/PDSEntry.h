
@interface PDSEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * _clientID;
    PDSRegistration * _registration;
    unsigned char  _state;
    PDSUser * _user;
}

@property (nonatomic, readonly) NSString *clientID;
@property (nonatomic, readonly) PDSRegistration *registration;
@property (nonatomic, readonly) unsigned char state;
@property (nonatomic, readonly) PDSUser *user;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entryWithUpdatedState:(unsigned char)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUser:(id)arg1 registration:(id)arg2 clientID:(id)arg3;
- (id)initWithUser:(id)arg1 registration:(id)arg2 clientID:(id)arg3 state:(unsigned char)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntry:(id)arg1;
- (id)registration;
- (unsigned char)state;
- (id)user;

@end
