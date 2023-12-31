
@interface IKJSViewModelLink : IKJSEventListenerObject <IKJSViewModelLink, _IKJSViewModelLink, _IKJSViewModelLinkProxy> {
    <IKJSViewModelLinkDelegate> * _delegate;
    struct { 
        bool hasDocumentDidChange; 
        bool hasResponseDictionaryDidChange; 
    }  _delegateFlags;
    IKDOMDocument * _document;
    bool  _isClosed;
    NSDictionary * _responseDictionary;
}

@property (nonatomic) <IKJSViewModelLinkDelegate> *delegate;
@property (nonatomic, retain) IKDOMDocument *document;
@property (nonatomic, copy) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (void)_unhandled;
- (id)asPrivateIKJSViewModelLink;
- (void)cancel;
- (void)close:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)document;
- (id)init;
- (id)responseDictionary;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setResponseDictionary:(id)arg1;

@end
