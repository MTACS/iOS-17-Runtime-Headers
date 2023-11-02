
@interface SBIconListViewIconVisibilityInfo : NSObject <BSDescriptionProviding, NSCopying> {
    bool  _normalized;
    NSMapTable * _visibleRects;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isNormalized, nonatomic) bool normalized;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSMapTable *visibleIconRects;

- (void).cxx_destruct;
- (void)addValuesFromIconVisibilityInfo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)enumerateVisibleIconsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isNormalized;
- (void)setNormalized:(bool)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forIcon:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)visibleIconRects;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRectForIcon:(id)arg1;

@end
