
@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying> {
    NSString * _eDesc;
    NSObject<OS_xpc_object> * _endpoint;
    unsigned int  _invalidationGeneration;
    NSUUID * _oneshot;
    int  _targetPID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
