
@interface _TtCV8RemoteUI10ChoiceView6Choice : RUIElement {
    void action;
    void activityIndicatorCount;
    void buttonType;
    void id;
    void parentElement;
    void setEnabled;
    void setTitle;
    void startActivityBlock;
    void stopActivityBlock;
    void title;
}

@property (nonatomic, readonly) RUIElement *parent;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAttributes:(id)arg1 parent:(id)arg2;
- (void)pageDidChange;
- (id)parent;
- (void)startActivityIndicator;
- (id)staticValues;
- (void)stopActivityIndicator;
- (void)tappedWithSender:(id)arg1;

@end
