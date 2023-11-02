
@interface CSAdjunctListItem : NSObject <BSDescriptionProviding> {
    NSMutableSet * _actions;
    bool  _animateDismissal;
    bool  _animatePresentation;
    NSString * _identifier;
    UIViewController<CSAdjunctItemHosting> * contentHost;
    UIView * itemView;
}

@property (nonatomic, readonly) SBSLockScreenContentAction *action;
@property (nonatomic) bool animateDismissal;
@property (nonatomic) bool animatePresentation;
@property (nonatomic, retain) UIViewController<CSAdjunctItemHosting> *contentHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) UIView *itemView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (void)addAction:(id)arg1;
- (bool)animateDismissal;
- (bool)animatePresentation;
- (id)contentHost;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isValid;
- (id)itemView;
- (void)removeAction:(id)arg1;
- (void)setAnimateDismissal:(bool)arg1;
- (void)setAnimatePresentation:(bool)arg1;
- (void)setContentHost:(id)arg1;
- (void)setItemView:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
