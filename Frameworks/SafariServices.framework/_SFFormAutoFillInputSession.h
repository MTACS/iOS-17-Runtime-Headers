
@interface _SFFormAutoFillInputSession : NSObject {
    NSDictionary * _autoFillInputSessionUserObject;
    <_WKFocusedElementInfo> * _focusedElementInfo;
    <_WKFormInputSession> * _formInputSession;
    WBSFormMetadata * _formMetadata;
    SFFormAutoFillFrameHandle * _frameHandle;
}

@property (nonatomic, readonly) NSDictionary *autoFillInputSessionUserObject;
@property (nonatomic, readonly) <_WKFocusedElementInfo> *focusedElementInfo;
@property (nonatomic, readonly) <_WKFormInputSession> *formInputSession;
@property (nonatomic, readonly) WBSFormMetadata *formMetadata;
@property (nonatomic, readonly) SFFormAutoFillFrameHandle *frameHandle;

- (void).cxx_destruct;
- (id)_initWithFormInputSession:(id)arg1 focusedElement:(id)arg2;
- (void)_updateAutoFillInputSessionUserObject:(id)arg1;
- (id)autoFillInputSessionByReplacingInputSessionUserObject:(id)arg1;
- (id)autoFillInputSessionUserObject;
- (id)focusedElementInfo;
- (id)formInputSession;
- (id)formMetadata;
- (id)frameHandle;
- (id)initWithFocusedElement:(id)arg1;
- (id)initWithFormInputSession:(id)arg1;

@end
