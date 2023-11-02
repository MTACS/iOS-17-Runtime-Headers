
@protocol SUUIViewElementView <NSObject>

@required

+ (struct CGSize { double x1; double x2; })preferredSizeForViewElement:(SUUIViewElement *)arg1 context:(SUUIViewElementLayoutContext *)arg2;
+ (bool)prefetchResourcesForViewElement:(SUUIViewElement *)arg1 reason:(long long)arg2 context:(SUUIViewElementLayoutContext *)arg3;
+ (void)requestLayoutForViewElement:(SUUIViewElement *)arg1 width:(double)arg2 context:(SUUIViewElementLayoutContext *)arg3;
+ (struct CGSize { double x1; double x2; })sizeThatFitsWidth:(double)arg1 viewElement:(SUUIViewElement *)arg2 context:(SUUIViewElementLayoutContext *)arg3;

- (void)reloadWithViewElement:(SUUIViewElement *)arg1 width:(double)arg2 context:(SUUIViewElementLayoutContext *)arg3;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)setImage:(UIImage *)arg1 forArtworkRequest:(SUUIArtworkRequest *)arg2 context:(SUUIViewElementLayoutContext *)arg3;
- (bool)updateWithItemState:(SUUIItemState *)arg1 context:(SUUIViewElementLayoutContext *)arg2 animated:(bool)arg3;
- (UIView *)viewForElementIdentifier:(NSString *)arg1;

@optional

+ (SUUIViewTextProperties *)textPropertiesForViewElement:(SUUIViewElement *)arg1 width:(double)arg2 context:(SUUIViewElementLayoutContext *)arg3;

@end
