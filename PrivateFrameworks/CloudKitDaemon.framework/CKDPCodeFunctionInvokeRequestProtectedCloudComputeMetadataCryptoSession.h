
@interface CKDPCodeFunctionInvokeRequestProtectedCloudComputeMetadataCryptoSession : PBCodable <NSCopying> {
    NSData * _routingToken;
    NSData * _wrappedInvocationKey;
}

@property (nonatomic, readonly) bool hasRoutingToken;
@property (nonatomic, readonly) bool hasWrappedInvocationKey;
@property (nonatomic, retain) NSData *routingToken;
@property (nonatomic, retain) NSData *wrappedInvocationKey;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRoutingToken;
- (bool)hasWrappedInvocationKey;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routingToken;
- (void)setRoutingToken:(id)arg1;
- (void)setWrappedInvocationKey:(id)arg1;
- (id)wrappedInvocationKey;
- (void)writeTo:(id)arg1;

@end
