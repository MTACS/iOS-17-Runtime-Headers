
@interface AVAssetResourceLoaderRemoteHandlerContext : NSObject <NSSecureCoding> {
    unsigned long long  _authHandlerObjectID;
    unsigned long long  _contentKeySessionHandlerObjectID;
    unsigned long long  _customURLHandlerObjectID;
    NSObject<OS_xpc_object> * _endpoint;
}

@property (nonatomic, readonly) unsigned long long authHandlerObjectID;
@property (nonatomic, readonly) unsigned long long contentKeySessionHandlerObjectID;
@property (nonatomic, readonly) unsigned long long customURLHandlerObjectID;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *endpoint;

+ (bool)supportsSecureCoding;

- (unsigned long long)authHandlerObjectID;
- (unsigned long long)contentKeySessionHandlerObjectID;
- (unsigned long long)customURLHandlerObjectID;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithEndpoint:(id)arg1 customURLHandlerObjectID:(unsigned long long)arg2 authHandlerObjectID:(unsigned long long)arg3 contentKeySessionHandlerObjectID:(unsigned long long)arg4;

@end
