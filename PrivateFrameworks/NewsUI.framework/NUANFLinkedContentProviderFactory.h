
@interface NUANFLinkedContentProviderFactory : NSObject <NULinkedContentProviderFactory> {
    <FCContentContext> * _contentContext;
}

@property (nonatomic, readonly) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)contentContext;
- (id)createLinkedContentProviderForArticle:(id)arg1;
- (id)initWithContentContext:(id)arg1;

@end
