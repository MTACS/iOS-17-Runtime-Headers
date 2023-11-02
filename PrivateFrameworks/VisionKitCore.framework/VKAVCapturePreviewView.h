
@interface VKAVCapturePreviewView : UIView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    <VKAVCapturePreviewViewDelegate> * _delegate;
    long long  _interfaceOrientation;
}

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)layoutSubviews;

@end
