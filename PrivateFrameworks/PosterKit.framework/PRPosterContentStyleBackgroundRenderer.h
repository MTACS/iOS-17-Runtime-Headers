
@interface PRPosterContentStyleBackgroundRenderer : NSObject <PRPosterContentStyleRenderer> {
    NSArray * _colorViews;
    _PRContentStyleGradientView * _gradientView;
    UIColor * _originalBackgroundColor;
    UIView * _view;
}

@property (nonatomic, retain) NSArray *colorViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _PRContentStyleGradientView *gradientView;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *originalBackgroundColor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)clearAnyPreviousStyle;
- (id)colorViews;
- (id)gradientView;
- (id)initWithView:(id)arg1;
- (id)originalBackgroundColor;
- (void)renderDiscreteColorStyle:(id)arg1;
- (void)renderGradientStyle:(id)arg1;
- (void)setColorViews:(id)arg1;
- (void)setGradientView:(id)arg1;
- (void)setOriginalBackgroundColor:(id)arg1;
- (id)view;

@end
