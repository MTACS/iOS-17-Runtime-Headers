
@interface SBIconLabelViewSimpleFactory : NSObject <SBIconLabelViewFactory> {
    SBIconSimpleLabelView * _prewarmSimpleLabelView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)canUseIconLabelView:(id)arg1 toDisplayLabelWithSettings:(id)arg2 imageParameters:(id)arg3 forIconView:(id)arg4;
- (bool)canUseIconSimpleLabelViewToDisplayLabelWithSettings:(id)arg1 imageParameters:(id)arg2 forIconView:(id)arg3;
- (id)iconLabelViewWithSettings:(id)arg1 imageParameters:(id)arg2 forIconView:(id)arg3;
- (void)prewarmForSettings:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2 minSize:(struct CGSize { double x1; double x2; })arg3 scale:(double)arg4;

@end
