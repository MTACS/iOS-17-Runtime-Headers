
@interface WFOverlayImageEditorViewController : UIViewController <WFOverlayImageEditorOptionsViewDelegate> {
    WFOverlayImageEditorCanvasView * _canvasView;
    id /* block */  _completionHandler;
    WFFileRepresentation * _currentFile;
    NSArray * _fileRepresentations;
    WFOpacitySliderView * _opacityView;
    NSLayoutConstraint * _opacityViewVerticalConstraint;
    WFOverlayImageEditorOptionsView * _optionsView;
    WFImage * _overlayImage;
    NSMapTable * _transforms;
}

@property (nonatomic) WFOverlayImageEditorCanvasView *canvasView;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) WFFileRepresentation *currentFile;
@property (nonatomic, copy) NSArray *fileRepresentations;
@property (nonatomic) bool opacitySliderVisible;
@property (nonatomic) WFOpacitySliderView *opacityView;
@property (nonatomic, retain) NSLayoutConstraint *opacityViewVerticalConstraint;
@property (nonatomic) WFOverlayImageEditorOptionsView *optionsView;
@property (nonatomic, retain) WFImage *overlayImage;
@property (nonatomic) bool rotationEnabled;
@property (nonatomic, retain) NSMapTable *transforms;

- (void).cxx_destruct;
- (void)cancelEditingImage;
- (id)canvasView;
- (id /* block */)completionHandler;
- (id)currentFile;
- (void)didChangeOpacity:(id)arg1;
- (id)editorBackgroundColor;
- (id)fileRepresentations;
- (void)finishEditingImage;
- (id)initWithFileRepresentations:(id)arg1 overlayImage:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)loadView;
- (bool)opacitySliderVisible;
- (id)opacityView;
- (id)opacityViewVerticalConstraint;
- (id)optionsView;
- (id)overlayImage;
- (bool)prefersStatusBarHidden;
- (void)resetOverlayImageViewTransformations;
- (bool)rotationEnabled;
- (void)setCanvasView:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCurrentFile:(id)arg1;
- (void)setFileRepresentations:(id)arg1;
- (void)setOpacitySliderVisible:(bool)arg1;
- (void)setOpacityView:(id)arg1;
- (void)setOpacityViewVerticalConstraint:(id)arg1;
- (void)setOptionsView:(id)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setRotationEnabled:(bool)arg1;
- (void)setTransforms:(id)arg1;
- (id)transforms;
- (void)viewDidLoad;

@end
