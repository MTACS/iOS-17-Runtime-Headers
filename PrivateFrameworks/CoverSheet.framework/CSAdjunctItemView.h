
@interface CSAdjunctItemView : UIView <BSDescriptionProviding, MTMaterialGrouping> {
    <CSAdjunctItemHosting> * _contentHost;
    bool  _isContentHostPlatterView;
    NSString * _materialGroupNameBase;
    PLPlatterView * _platterView;
    long long  _recipe;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeToMimic;
}

@property (nonatomic) <CSAdjunctItemHosting> *contentHost;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *materialGroupNameBase;
@property (nonatomic, readonly) PLPlatterView *platterView;
@property (nonatomic) struct CGSize { double x1; double x2; } sizeToMimic;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setPlatterView:(id)arg1;
- (void)_updateSizeToMimic;
- (id)contentHost;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithRecipe:(long long)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)materialGroupNameBase;
- (id)platterView;
- (void)setContentHost:(id)arg1;
- (void)setMaterialGroupNameBase:(id)arg1;
- (void)setSizeToMimic:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })sizeToMimic;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
