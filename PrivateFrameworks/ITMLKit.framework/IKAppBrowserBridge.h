
@interface IKAppBrowserBridge : NSObject <IKDOMFeature> {
    <IKAppBrowser> * _appBrowser;
    IKAppContext * _appContext;
    double  _cornerRadius;
    NSString * _featureName;
    double  _interitemSpacing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _maskInset;
}

@property (nonatomic) <IKAppBrowser> *appBrowser;
@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } maskInset;
@property (readonly) Class superclass;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (id)appBrowser;
- (id)appContext;
- (double)cornerRadius;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (double)interitemSpacing;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })maskInset;
- (void)present;
- (void)setAppBrowser:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setMaskInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
