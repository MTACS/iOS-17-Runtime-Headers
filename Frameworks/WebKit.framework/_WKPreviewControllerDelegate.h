
@interface _WKPreviewControllerDelegate : NSObject <QLPreviewControllerDelegate> {
    struct IntRect { 
        struct IntPoint { 
            int m_x; 
            int m_y; 
        } m_location; 
        struct IntSize { 
            int m_width; 
            int m_height; 
        } m_size; 
    }  _linkRect;
    void * _previewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (id)initWithSystemPreviewController:(void*)arg1;
- (id)presentingViewController;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)previewControllerDidDismiss:(id)arg1;

@end
