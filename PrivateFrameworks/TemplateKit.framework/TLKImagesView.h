
@interface TLKImagesView : TLKView <NUIContainerViewDelegate> {
    <TLKImagesViewDelegate> * _delegate;
    NSMutableArray * _imageButtons;
    NSArray * _images;
    bool  _paddingDisabled;
    bool  _selectionEnabled;
    bool  _useGridAlignment;
}

@property (nonatomic, retain) NUIContainerFlowView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <TLKImagesViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *imageButtons;
@property (nonatomic, retain) NSArray *images;
@property (getter=isPaddingDisabled, nonatomic) bool paddingDisabled;
@property (getter=isSelectionEnabled, nonatomic) bool selectionEnabled;
@property (readonly) Class superclass;
@property (nonatomic) bool useGridAlignment;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (void)_updateImages;
- (void)_updateSpacing;
- (id)delegate;
- (id)imageButtons;
- (id)imageViewAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)images;
- (bool)isPaddingDisabled;
- (bool)isSelectionEnabled;
- (void)observedPropertiesChanged;
- (void)setDelegate:(id)arg1;
- (void)setImageButtons:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setPaddingDisabled:(bool)arg1;
- (void)setSelectionEnabled:(bool)arg1;
- (void)setUseGridAlignment:(bool)arg1;
- (id)setupContentView;
- (bool)useGridAlignment;
- (bool)usesDefaultLayoutMargins;

@end
