
@interface SXEmbedComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    <SXEmbedDataProvider> * _embedDataProvider;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXEmbedDataProvider> *embedDataProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)embedDataProvider;
- (id)initWithDOMObjectProvider:(id)arg1 embedDataProvider:(id)arg2;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
- (id)type;

@end
