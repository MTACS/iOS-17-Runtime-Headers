
@interface PDFViewControllerPrivate : NSObject {
    PDFAnnotation * activeAnnotation;
    bool  didPostPDFExtensionViewAnnotationLongPress;
    UIEditMenuInteraction * editMenuInteraction;
    double  longPressGestureStartTime;
    CALayer * marqueeEffect;
    unsigned long long  textSelectionMenu;
    PDFView * view;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  viewMarquee;
}

- (void).cxx_destruct;

@end
