
@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject> {
    struct ObjectStorage<WebKit::InjectedBundleNodeHandle> { 
        struct type { 
            unsigned char __lx[48]; 
        } data; 
    }  _nodeHandle;
}

@property (nonatomic) bool HTMLInputElementIsAutoFilled;
@property (nonatomic) bool HTMLInputElementIsAutoFilledAndObscured;
@property (nonatomic) bool HTMLInputElementIsAutoFilledAndViewable;
@property (nonatomic, readonly) bool HTMLInputElementIsUserEdited;
@property (nonatomic, readonly) WKWebProcessPlugInNodeHandle *HTMLTableCellElementCellAbove;
@property (nonatomic, readonly) bool HTMLTextAreaElementIsUserEdited;
@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly) void*_nodeHandle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } elementBounds;
@property (nonatomic, readonly) WKWebProcessPlugInFrame *frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSelectElement;
@property (nonatomic, readonly) bool isSelectableTextNode;
@property (readonly) Class superclass;

+ (id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2;

- (bool)HTMLInputElementIsAutoFilled;
- (bool)HTMLInputElementIsAutoFilledAndObscured;
- (bool)HTMLInputElementIsAutoFilledAndViewable;
- (bool)HTMLInputElementIsUserEdited;
- (id)HTMLTableCellElementCellAbove;
- (bool)HTMLTextAreaElementIsUserEdited;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void*)_nodeHandle;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBounds;
- (id)frame;
- (id)htmlIFrameElementContentFrame;
- (long long)htmlInputElementAutoFillButtonType;
- (long long)htmlInputElementLastAutoFillButtonType;
- (bool)isHTMLInputElementAutoFillButtonEnabled;
- (bool)isSelectElement;
- (bool)isSelectableTextNode;
- (bool)isTextField;
- (id)renderedImageWithOptions:(unsigned int)arg1;
- (id)renderedImageWithOptions:(unsigned int)arg1 width:(id)arg2;
- (void)setHTMLInputElementAutoFillButtonEnabledWithButtonType:(long long)arg1;
- (void)setHTMLInputElementIsAutoFilled:(bool)arg1;
- (void)setHTMLInputElementIsAutoFilledAndObscured:(bool)arg1;
- (void)setHTMLInputElementIsAutoFilledAndViewable:(bool)arg1;

@end
