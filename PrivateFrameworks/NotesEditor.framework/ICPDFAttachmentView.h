
@interface ICPDFAttachmentView : ICAttachmentView {
    UIImage * _image;
    bool  _isManaullyGeneratingImage;
    struct CGPDFPage { } * _page;
    struct CGPDFDocument { } * _pdf;
    UIActivityIndicatorView * _progressView;
    NSOperation * _renderOperation;
    bool  _rendering;
    ICSelectorDelayer * _startProgressSelectorDelayer;
}

@property (nonatomic, readonly) bool availableImageIsAcceptable;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isManaullyGeneratingImage;
@property (nonatomic, readonly) struct CGPDFPage { }*page;
@property (nonatomic, retain) UIActivityIndicatorView *progressView;
@property (nonatomic) NSOperation *renderOperation;
@property (getter=isRendering, nonatomic) bool rendering;
@property (retain) ICSelectorDelayer *startProgressSelectorDelayer;

+ (id)renderingQueue;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)accessibilityLabel;
- (bool)availableImageIsAcceptable;
- (bool)cancelDidScrollIntoVisibleRange;
- (bool)cancelRenderingIfPossible;
- (void)cleanupPDFDocument;
- (void)dealloc;
- (void)didChangeMedia;
- (void)didMoveToWindow;
- (void)didScrollIntoVisibleRange;
- (void)didScrollOutOfVisibleRange;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textAttachment:(id)arg2 textContainer:(id)arg3 forManualRendering:(bool)arg4;
- (bool)isManaullyGeneratingImage;
- (bool)isRendering;
- (bool)needToStartRender;
- (struct CGPDFPage { }*)page;
- (id)pdfURL;
- (void)prepareForPrinting;
- (id)progressView;
- (id)renderOperation;
- (void)setAttachment:(id)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlightColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsManaullyGeneratingImage:(bool)arg1;
- (void)setProgressView:(id)arg1;
- (void)setRenderOperation:(id)arg1;
- (void)setRendering:(bool)arg1;
- (void)setStartProgressSelectorDelayer:(id)arg1;
- (void)setupBorderForLayer:(id)arg1;
- (void)startImageRenderIfNeeded;
- (void)startProgress;
- (id)startProgressSelectorDelayer;
- (void)stopProgress;
- (void)updateLayerContentsWithFade:(bool)arg1;

@end
