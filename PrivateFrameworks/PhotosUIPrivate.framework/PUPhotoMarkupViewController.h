
@interface PUPhotoMarkupViewController : UIViewController <MarkupViewControllerDelegate> {
    UIViewController<MarkupViewControllerPrivateProtocol> * __markupViewController;
    PUObserverRegistry * __observerRegistry;
    long long  __sourceImageVersion;
    NSURL * __workaroundInputWriteURL;
    PUMediaProvider * _mediaProvider;
    UIBarButtonItem * _redoButton;
    PUReviewAsset * _reviewAsset;
    UIBarButtonItem * _undoButton;
    NSUndoManager * _undoManager;
    bool  _updatingUndoButtons;
}

@property (nonatomic, readonly) UIViewController<MarkupViewControllerPrivateProtocol> *_markupViewController;
@property (nonatomic, readonly) PUObserverRegistry *_observerRegistry;
@property (setter=_setSourceImageVersion:, nonatomic) long long _sourceImageVersion;
@property (setter=_setWorkaroundInputWriteURL:, nonatomic, copy) NSURL *_workaroundInputWriteURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUMediaProvider *mediaProvider;
@property (nonatomic, retain) UIBarButtonItem *redoButton;
@property (nonatomic, readonly) PUReviewAsset *reviewAsset;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIBarButtonItem *undoButton;
@property (nonatomic) bool updatingUndoButtons;

- (void).cxx_destruct;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleRedoButton:(id)arg1;
- (void)_handleUndoButton:(id)arg1;
- (id)_markupViewController;
- (void)_notifyObserversDidFinishWithSavedAsset:(id)arg1;
- (id)_observerRegistry;
- (void)_setSourceImageVersion:(long long)arg1;
- (void)_setWorkaroundInputWriteURL:(id)arg1;
- (long long)_sourceImageVersion;
- (void)_undoManagerCheckpoint:(id)arg1;
- (void)_updateUndoRedoButtons;
- (id)_workaroundInputWriteURL;
- (id)controller:(id)arg1 willSetToolbarItems:(id)arg2;
- (void)dealloc;
- (id)initWithReviewAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)mediaProvider;
- (id)redoButton;
- (void)registerObserver:(id)arg1;
- (id)reviewAsset;
- (void)setRedoButton:(id)arg1;
- (void)setUndoButton:(id)arg1;
- (void)setUpdatingUndoButtons:(bool)arg1;
- (id)undoButton;
- (void)unregisterObserver:(id)arg1;
- (bool)updatingUndoButtons;
- (void)viewDidLoad;

@end
