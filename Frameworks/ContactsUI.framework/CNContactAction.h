
@interface CNContactAction : NSObject {
    bool  _canPerformAction;
    UIColor * _color;
    CNContact * _contact;
    <CNContactActionDelegate> * _delegate;
    bool  _destructive;
    UIColor * _glyphColor;
    SEL  _selector;
    bool  _showBackgroundPlatter;
    id  _target;
    NSString * _title;
    long long  _transportType;
    bool  _wrapTitle;
}

@property (nonatomic, readonly) bool canPerformAction;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic) <CNContactActionDelegate> *delegate;
@property (getter=isDestructive, nonatomic) bool destructive;
@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, readonly) CNMutableContact *mutableContact;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic) bool showBackgroundPlatter;
@property (nonatomic, readonly) id target;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic) long long transportType;
@property (nonatomic) bool wrapTitle;

+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
+ (id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(bool)arg4;

- (void).cxx_destruct;
- (bool)canPerformAction;
- (id)color;
- (id)contact;
- (id)delegate;
- (id)description;
- (id)glyphColor;
- (id)init;
- (id)initWithContact:(id)arg1;
- (id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(bool)arg4;
- (bool)isDestructive;
- (id)mutableContact;
- (void)performActionWithSender:(id)arg1;
- (SEL)selector;
- (void)setColor:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setGlyphColor:(id)arg1;
- (void)setShowBackgroundPlatter:(bool)arg1;
- (void)setTransportType:(long long)arg1;
- (void)setWrapTitle:(bool)arg1;
- (bool)showBackgroundPlatter;
- (id)target;
- (id)title;
- (long long)transportType;
- (bool)wrapTitle;

@end
