
@interface MTStylingProvidingSolidColorView : UIView <MTVisualStylingProviding> {
    UIView * _highlightView;
    bool  _highlighted;
    NSMutableDictionary * _stylingProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, retain) NSMutableDictionary *stylingProviders;
@property (readonly) Class superclass;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)_stylingProvidingSolidColorLayer;
- (bool)isHighlighted;
- (void)setHighlighted:(bool)arg1;
- (void)setStylingProviders:(id)arg1;
- (id)stylingProviders;
- (id)visualStylingProviderForCategory:(long long)arg1;

@end
