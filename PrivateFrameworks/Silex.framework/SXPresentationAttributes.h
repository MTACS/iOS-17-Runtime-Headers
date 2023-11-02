
@interface SXPresentationAttributes : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _canvasSize;
    double  _contentScaleFactor;
    NSString * _contentSizeCategory;
    bool  _enableViewportDebugging;
    bool  _fadeInComponents;
    unsigned long long  _presentationMode;
    bool  _testingConditionEnabled;
    bool  _useTransparentToolbar;
}

@property (nonatomic) struct CGSize { double x1; double x2; } canvasSize;
@property (nonatomic) double contentScaleFactor;
@property (nonatomic, retain) NSString *contentSizeCategory;
@property (nonatomic) bool enableViewportDebugging;
@property (nonatomic) bool fadeInComponents;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) bool testingConditionEnabled;
@property (nonatomic) bool useTransparentToolbar;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })canvasSize;
- (double)contentScaleFactor;
- (id)contentSizeCategory;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)enableViewportDebugging;
- (bool)fadeInComponents;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned long long)presentationMode;
- (void)setCanvasSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentScaleFactor:(double)arg1;
- (void)setContentSizeCategory:(id)arg1;
- (void)setEnableViewportDebugging:(bool)arg1;
- (void)setFadeInComponents:(bool)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setTestingConditionEnabled:(bool)arg1;
- (void)setUseTransparentToolbar:(bool)arg1;
- (bool)testingConditionEnabled;
- (bool)useTransparentToolbar;

@end
