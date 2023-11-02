
@interface GEOXPCReply : NSObject <GEOXPCSerializable> {
    NSError * _error;
    unsigned char  _flags;
    NSObject<OS_xpc_object> * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, readonly) unsigned char flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_xpc_object> *object;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *replyDictionary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)error;
- (unsigned char)flags;
- (id)init;
- (id)initWithReplyObject:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (id)object;
- (id)replyDictionary;
- (void)send;
- (void)setError:(id)arg1;
- (void)setObject:(id)arg1;

@end
