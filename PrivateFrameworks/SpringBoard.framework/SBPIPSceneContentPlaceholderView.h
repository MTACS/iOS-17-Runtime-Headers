
@interface SBPIPSceneContentPlaceholderView : UIView <SBScenePlaceholderContentView> {
    UIImageView * _imageView;
}

@property (nonatomic) long long containerOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long statusBarStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithImage:(id)arg1;
- (void)layoutSubviews;

@end
