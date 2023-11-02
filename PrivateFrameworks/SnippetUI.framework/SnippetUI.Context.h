
@interface SnippetUI.Context : NSObject {
    void $__lazy_storage_$_siriEventUpdatePublisher;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _asrText;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _backgroundElements;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _backgroundMaterial;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isInAmbient;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _isVibrant;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _scaleFactor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _sharedState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _snippetWidth;
    void cancellables;
    void containsComponentsWithActionSubject;
    void currentIdiom;
    void interactionDelegate;
    void isEditingCount;
    void isModernizedSnippet;
    void isRedacted;
    void requestsKeyWindowSubject;
    void responseViewId;
    void siriEventUpdateSubject;
    void viewId;
    void visualResponseLocation;
}

@property (nonatomic) long long backgroundMaterial;
@property (nonatomic) long long currentIdiom;
@property (nonatomic) <VRXInteractionDelegate> *interactionDelegate;
@property (nonatomic) double snippetWidth;

- (void).cxx_destruct;
- (long long)backgroundMaterial;
- (long long)currentIdiom;
- (id)init;
- (id)interactionDelegate;
- (void)setBackgroundMaterial:(long long)arg1;
- (void)setCurrentIdiom:(long long)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setSnippetWidth:(double)arg1;
- (double)snippetWidth;

@end
