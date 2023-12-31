
@interface UIWebViewInternal : NSObject {
    UIWebBrowserView * browserView;
    UICheckeredPatternView * checkeredPatternView;
    long long  clickedAlertButtonIndex;
    <UIWebViewDelegate> * delegate;
    unsigned int  didRotateEnclosingScrollView;
    unsigned int  drawInWebThread;
    unsigned int  drawsCheckeredPattern;
    unsigned int  hasOverriddenOrientationChangeEventHandling;
    unsigned int  inRotation;
    unsigned int  isLoading;
    UIWebPDFViewHandler * pdfHandler;
    NSURLRequest * request;
    unsigned int  safeAreaShouldAffectObscuredInsets;
    unsigned int  scalesPageToFit;
    UIScrollView * scroller;
    unsigned int  selectionEnabled;
    UIWebViewWebViewDelegate * webViewDelegate;
}

@end
