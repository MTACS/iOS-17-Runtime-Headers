
@interface IDSGroupSessionBroadcastParameter : NSObject <NSCopying, NSSecureCoding> {
    NSObject<OS_nw_endpoint> * _endpoint;
    NSString * _groupSessionID;
    NSObject<OS_nw_parameters> * _parameters;
    NSData * _salt;
    NSString * _serviceName;
}

@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *endpoint;
@property (nonatomic, readonly) NSString *groupSessionID;
@property (nonatomic, readonly) NSObject<OS_nw_parameters> *parameters;
@property (nonatomic, readonly) NSData *salt;
@property (nonatomic, readonly) NSString *serviceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_requestNWConnectionforIDSGroupSessionBroadcastParameter:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)groupSessionID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupSessionID:(id)arg1 salt:(id)arg2 serviceName:(id)arg3;
- (id)initWithGroupSessionID:(id)arg1 serviceName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (id)salt;
- (id)serviceName;

@end
