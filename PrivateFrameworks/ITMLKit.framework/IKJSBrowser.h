
@interface IKJSBrowser : IKJSObject <IKJSBrowser> {
    IKAppBrowserBridge * _bridge;
    double  _cornerRadius;
    double  _interitemSpacing;
    NSDictionary * _maskInset;
}

@property (nonatomic, retain) IKAppBrowserBridge *bridge;
@property (nonatomic) double cornerRadius;
@property (nonatomic) double interitemSpacing;
@property (nonatomic, retain) NSDictionary *maskInset;

- (void).cxx_destruct;
- (id)bridge;
- (double)cornerRadius;
- (double)interitemSpacing;
- (id)maskInset;
- (void)present;
- (void)setBridge:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setInteritemSpacing:(double)arg1;
- (void)setMaskInset:(id)arg1;

@end
