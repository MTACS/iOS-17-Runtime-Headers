
@interface GEOXPCReplyError : NSObject <GEOXPCReply, GEOXPCSerializable> {
    NSError * _error;
    unsigned char  _flags;
    unsigned long long  _mode;
    NSObject<OS_xpc_object> * _object;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)error;
- (id)initWithReplyObject:(id)arg1 error:(id)arg2 mode:(unsigned long long)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (void)send;

@end
