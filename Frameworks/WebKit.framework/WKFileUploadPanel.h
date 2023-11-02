
@interface WKFileUploadPanel : UIViewController <PHPickerViewControllerDelegate, UIAdaptivePresentationControllerDelegate, UIContextMenuInteractionDelegate, UIDocumentPickerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    struct RetainPtr<NSSet<NSString *>> { 
        void *m_ptr; 
    }  _acceptedUTIs;
    bool  _allowMultipleFiles;
    struct OptionSet<WKFileUploadPanelImagePickerType> { 
        unsigned char m_storage; 
    }  _allowedImagePickerTypes;
    struct RetainPtr<UIImagePickerController> { 
        void *m_ptr; 
    }  _cameraPicker;
    <WKFileUploadPanelDelegate> * _delegate;
    struct RetainPtr<UIContextMenuInteraction> { 
        void *m_ptr; 
    }  _documentContextMenuInteraction;
    struct RetainPtr<UIDocumentPickerViewController> { 
        void *m_ptr; 
    }  _documentPickerController;
    struct CGPoint { 
        double x; 
        double y; 
    }  _interactionPoint;
    bool  _isPresentingSubMenu;
    bool  _isRepositioningContextMenu;
    struct RefPtr<WebKit::WebOpenPanelResultListenerProxy, WTF::RawPtrTraits<WebKit::WebOpenPanelResultListenerProxy>, WTF::DefaultRefDerefTraits<WebKit::WebOpenPanelResultListenerProxy>> { 
        struct WebOpenPanelResultListenerProxy {} *m_ptr; 
    }  _listener;
    unsigned char  _mediaCaptureType;
    struct RetainPtr<WKFileUploadMediaTranscoder> { 
        void *m_ptr; 
    }  _mediaTranscoder;
    struct RetainPtr<PHPickerViewController> { 
        void *m_ptr; 
    }  _photoPicker;
    struct RetainPtr<UIViewController> { 
        void *m_ptr; 
    }  _presentationViewController;
    struct Vector<WTF::RetainPtr<NSURL>, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> { 
        void *m_buffer; 
        unsigned int m_capacity; 
        unsigned int m_size; 
    }  _temporaryUploadedFileURLs;
    struct RetainPtr<NSFileCoordinator> { 
        void *m_ptr; 
    }  _uploadFileCoordinator;
    struct RetainPtr<NSFileManager> { 
        void *m_ptr; 
    }  _uploadFileManager;
    bool  _usingCamera;
    struct WeakObjCPtr<WKContentView> { 
        id m_weakReference; 
    }  _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKFileUploadPanelDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_adjustMediaCaptureType;
- (id)_cameraButtonLabel;
- (void)_cancel;
- (void)_chooseFiles:(id)arg1 displayString:(id)arg2 iconImage:(id)arg3;
- (id)_chooseFilesButtonLabel;
- (void)_chooseMediaItems:(id)arg1;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (struct pair<WTF::RetainPtr<NSURL>, WTF::RetainPtr<NSURL>> { struct RetainPtr<NSURL> { void *x_1_1_1; } x1; struct RetainPtr<NSURL> { void *x_2_1_1; } x2; })_copyToNewTemporaryDirectory:(id)arg1;
- (void)_dismissDisplayAnimated:(bool)arg1;
- (void)_dispatchDidDismiss;
- (id)_mediaTypesForPickerSourceType:(long long)arg1;
- (id)_photoLibraryButtonLabel;
- (void)_presentFullscreenViewController:(id)arg1 animated:(bool)arg2;
- (void)_processMediaInfoDictionaries:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)_processMediaInfoDictionaries:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)_processPickerResults:(id)arg1 atIndex:(unsigned long long)arg2 processedResults:(id)arg3 successBlock:(id /* block */)arg4 failureBlock:(id /* block */)arg5;
- (void)_processPickerResults:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (bool)_shouldMediaCaptureOpenMediaDevice;
- (void)_showCamera;
- (void)_showPhotoPicker;
- (void)_uploadItemForImageData:(id)arg1 imageName:(id)arg2 successBlock:(id /* block */)arg3 failureBlock:(id /* block */)arg4;
- (void)_uploadItemForJPEGRepresentationOfImage:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)_uploadItemFromMediaInfo:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)_uploadItemFromResult:(id)arg1 successBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)_uploadMediaItemsTranscodingVideo:(id)arg1;
- (bool)_willMultipleSelectionDelegateBeCalled;
- (id)acceptedTypeIdentifiers;
- (id)contextMenuInteraction:(id)arg1 configuration:(id)arg2 highlightPreviewForItemWithIdentifier:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (id)currentAvailableActionTitles;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (id)ensureContextMenuInteraction;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMultipleMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithView:(id)arg1;
- (void)picker:(id)arg1 didFinishPicking:(id)arg2;
- (bool)platformSupportsPickerViewController;
- (void)presentWithParameters:(void*)arg1 resultListener:(void*)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)removeContextMenuInteraction;
- (void)repositionContextMenuIfNeeded;
- (void)setDelegate:(id)arg1;
- (void)showDocumentPickerMenu;
- (void)showFilePickerMenu;

@end
