
@interface SUScriptDocumentInteractionController : SUScriptObject {
    SUScriptFunction * _cancelFunction;
    SUScriptFunction * _openWithFunction;
}

@property (copy) NSString *UTI;
@property (retain) WebScriptObject *cancelFunction;
@property (retain) WebScriptObject *openWithFunction;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)UTI;
- (id)_cancelFunction;
- (id)_className;
- (id)_nativeDocumentInteractionController;
- (id)_nativeObject;
- (id)_openWithFunction;
- (id)attributeKeys;
- (id)cancelFunction;
- (void)dealloc;
- (void)dismissMenuAnimated:(id)arg1;
- (id)openWithFunction;
- (id)scriptAttributeKeys;
- (void)setCancelFunction:(id)arg1;
- (void)setOpenWithFunction:(id)arg1;
- (void)setUTI:(id)arg1;
- (void)showOpenWithMenuFromDOMElement:(id)arg1;
- (void)showOpenWithMenuFromNavigationItem:(id)arg1;

@end
