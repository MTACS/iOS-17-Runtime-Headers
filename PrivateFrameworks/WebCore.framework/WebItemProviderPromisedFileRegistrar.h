
@interface WebItemProviderPromisedFileRegistrar : NSObject <WebItemProviderRegistrar> {
    struct BlockPtr<void (void (^)(NSURL *, NSError *))>="m_block"@? {}  _callback;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _typeIdentifier;
}

@property (nonatomic, readonly) NSData *dataForClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSItemProviderWriting> *representingObjectForClient;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) NSString *typeIdentifierForClient;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (id)initWithType:(id)arg1 callback:(id /* block */)arg2;
- (void)registerItemProvider:(id)arg1;
- (id)typeIdentifier;

@end
