
@interface CKMessageEntryViewController : UIInputViewController {
    CKMessageEntryView * _entryView;
    bool  _inputAccessoryViewControllerEnabled;
}

@property (nonatomic, readonly) CKMessageEntryView *entryView;
@property (nonatomic) bool inputAccessoryViewControllerEnabled;

+ (bool)_requiresProxyInterface;

- (void).cxx_destruct;
- (id)entryView;
- (id)initWithEntryView:(id)arg1;
- (bool)inputAccessoryViewControllerEnabled;
- (void)loadView;
- (void)setInputAccessoryViewControllerEnabled:(bool)arg1;

@end
