
@interface SUScriptModalDialog : NSObject {
    <SUScriptModalDialogDelegate> * _delegate;
    ISDialog * _dialog;
}

@property (nonatomic) <SUScriptModalDialogDelegate> *delegate;

+ (id)titleForURL:(id)arg1;

- (id)_copyResponseByRunningModal;
- (id)copyResponseByRunningModal;
- (void)dealloc;
- (id)delegate;
- (id)initWithDialog:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
