
@interface CPUINowPlayingButtonView : UIView <CAMLParserDelegate> {
    CALayer * _animatedGlyphLayer;
    NSMutableArray * _barLayers;
    bool  _highlighted;
    CALayer * _platterLayer;
    CAStateController * _stateController;
    NSString * _stateName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic, copy) NSString *stateName;
@property (readonly) Class superclass;

+ (id)classSubstitions;

- (void).cxx_destruct;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)_handleGlyphLayerDidLoad:(id)arg1;
- (void)_updateColors;
- (id)initWithCAML:(id)arg1;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)setStateName:(id)arg1;
- (id)stateName;
- (void)traitCollectionDidChange:(id)arg1;

@end
