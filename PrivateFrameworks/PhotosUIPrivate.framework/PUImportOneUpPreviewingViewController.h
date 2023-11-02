
@interface PUImportOneUpPreviewingViewController : UIViewController {
    PXImportItemViewModel * _importItemViewModel;
    PXImportMediaProvider * _mediaProvider;
    PUImportOneUpTransitionView * _previewView;
}

@property (nonatomic, retain) PXImportItemViewModel *importItemViewModel;
@property (nonatomic, retain) PXImportMediaProvider *mediaProvider;
@property (nonatomic, retain) PUImportOneUpTransitionView *previewView;

- (void).cxx_destruct;
- (id)importItemViewModel;
- (id)initWithImportItemViewModel:(id)arg1 startingImage:(id)arg2 mediaProvider:(id)arg3;
- (id)mediaProvider;
- (id)previewView;
- (void)setImportItemViewModel:(id)arg1;
- (void)setMediaProvider:(id)arg1;
- (void)setPreviewView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForImportItemViewModel:(id)arg1;
- (void)updatePreferredContentSize;
- (void)viewDidLoad;

@end
