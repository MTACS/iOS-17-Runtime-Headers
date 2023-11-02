
@interface WKImagePreviewViewController : UIViewController {
    struct RetainPtr<_WKActivatedElementInfo> { 
        void *m_ptr; 
    }  _activatedElementInfo;
    struct RetainPtr<CGImage *> { 
        void *m_ptr; 
    }  _image;
    struct RetainPtr<NSArray> { 
        void *m_ptr; 
    }  _imageActions;
    struct RetainPtr<UIImageView> { 
        void *m_ptr; 
    }  _imageView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCGImage:(struct RetainPtr<CGImage *> { void *x1; })arg1 defaultActions:(struct RetainPtr<NSArray> { void *x1; })arg2 elementInfo:(struct RetainPtr<_WKActivatedElementInfo> { void *x1; })arg3;
- (void)loadView;
- (id)previewActionItems;
- (void)viewDidLayoutSubviews;

@end
