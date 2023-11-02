
@interface CKKSExternalTLKShare : NSObject <NSSecureCoding> {
    NSData * _receiverPeerID;
    NSData * _senderPeerID;
    NSData * _signature;
    NSString * _tlkUUID;
    NSString * _view;
    NSData * _wrappedTLK;
}

@property (readonly) NSData *receiverPeerID;
@property (readonly) NSData *senderPeerID;
@property (readonly) NSData *signature;
@property (readonly) NSString *tlkUUID;
@property (readonly) NSString *view;
@property (readonly) NSData *wrappedTLK;

+ (id)parseFromJSONDict:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;
+ (id)unstringifyPeerID:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 tlkUUID:(id)arg2 receiverPeerID:(id)arg3 senderPeerID:(id)arg4 wrappedTLK:(id)arg5 signature:(id)arg6;
- (id)jsonDictionary;
- (id)receiverPeerID;
- (id)senderPeerID;
- (id)signature;
- (id)stringifyPeerID:(id)arg1;
- (id)tlkUUID;
- (id)view;
- (id)wrappedTLK;

@end
