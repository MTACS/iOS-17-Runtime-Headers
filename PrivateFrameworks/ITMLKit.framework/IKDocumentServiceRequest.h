
@interface IKDocumentServiceRequest : IKServiceRequest <IKJSViewModelLinkDelegate> {
    IKAppDocument * _appDocument;
    struct { 
        bool hasResponseDictionaryDidChange; 
        bool hasDocumentDidChange; 
    }  _dsrDelegateFlags;
    IKJSViewModelLink * _link;
    NSDictionary * _responseDictionary;
}

@property (readonly) IKAppDocument *appDocument;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *responseDictionary;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appDocument;
- (void)didCloseViewModelLink:(id)arg1 withErrorDictionary:(id)arg2;
- (void)documentDidChangeForViewModelLink:(id)arg1;
- (void)onCancel;
- (void)onSend;
- (id)responseDictionary;
- (void)responseDictionaryDidChangeForViewModelLink:(id)arg1;
- (void)setDelegate:(id)arg1;

@end