
@interface UITextSuggestionWithAction : UITextSuggestion {
    SEL  _action;
    id  _target;
}

@property (nonatomic) SEL action;
@property (nonatomic, retain) id target;

- (void).cxx_destruct;
- (SEL)action;
- (void)performActionWihSender:(id)arg1;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (id)target;

@end
