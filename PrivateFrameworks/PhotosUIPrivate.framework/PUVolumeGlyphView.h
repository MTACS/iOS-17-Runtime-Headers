
@interface PUVolumeGlyphView : UIView <CAMLParserDelegate> {
    CALayer * _glyphLayer;
    NSObject<OS_dispatch_queue> * _loadingQueue;
    CAStateController * _stateController;
    NSString * _stateName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *stateName;
@property (readonly) Class superclass;

+ (id)classSubstitions;

- (void).cxx_destruct;
- (Class)CAMLParser:(id)arg1 didFailToFindClassWithName:(id)arg2;
- (void)_handleGlyphLayerDidLoad:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setStateName:(id)arg1;
- (id)stateName;

@end
