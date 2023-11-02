
@interface PUEditExtensionActivityViewController : UIActivityViewController {
    <PUEditExtensionActivityViewControllerDelegate> * _editExtensionActivityViewControllerDelegate;
}

@property (nonatomic) <PUEditExtensionActivityViewControllerDelegate> *editExtensionActivityViewControllerDelegate;

- (void).cxx_destruct;
- (void)_performActivity:(id)arg1;
- (bool)_shouldShowSystemActivityType:(id)arg1;
- (bool)_shouldUseModernDesign;
- (bool)appWantsLargePreview;
- (id)editExtensionActivityViewControllerDelegate;
- (bool)isPhotosOrCamera;
- (void)setEditExtensionActivityViewControllerDelegate:(id)arg1;

@end
