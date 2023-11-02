
@interface WebItemProviderDataRegistrar : NSObject <WebItemProviderRegistrar> {
    struct RetainPtr<NSData> { 
        void *m_ptr; 
    }  _data;
    struct RetainPtr<NSString> { 
        void *m_ptr; 
    }  _typeIdentifier;
}

@property (nonatomic, readonly) NSData *data;
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
- (id)data;
- (id)dataForClient;
- (id)description;
- (id)initWithData:(id)arg1 type:(id)arg2;
- (void)registerItemProvider:(id)arg1;
- (id)typeIdentifier;
- (id)typeIdentifierForClient;

@end
