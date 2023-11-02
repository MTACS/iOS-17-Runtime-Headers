
@interface MTVisualStyling : NSObject {
    MTCoreMaterialVisualStyling * _coreMaterialVisualStyling;
}

@property (nonatomic, readonly) double alpha;
@property (nonatomic, readonly, copy) UIColor *color;
@property (nonatomic, readonly) CAFilter *composedFilter;
@property (getter=_coreMaterialVisualStyling, nonatomic, readonly) MTCoreMaterialVisualStyling *coreMaterialVisualStyling;
@property (nonatomic, readonly, copy) NSString *visualStyleName;
@property (nonatomic, readonly, copy) NSString *visualStyleSetName;

- (void).cxx_destruct;
- (id)_coreMaterialVisualStyling;
- (id)_layerConfig;
- (double)alpha;
- (void)applyToView:(id)arg1 withColorBlock:(id /* block */)arg2;
- (id)color;
- (id)composedFilter;
- (id)initWithCoreMaterialVisualStyling:(id)arg1;
- (id)visualEffect;
- (id)visualStyleName;
- (id)visualStyleSetName;

@end
