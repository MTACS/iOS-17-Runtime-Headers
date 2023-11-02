
@interface CRSUIStatusBarStyleAssertionData : NSObject {
    long long  _contrast;
    NSString * _identifier;
    long long  _interfaceStyle;
    bool  _siriPresentation;
}

@property (nonatomic) long long contrast;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic) long long interfaceStyle;
@property (getter=isSiriPresentation, nonatomic) bool siriPresentation;

- (void).cxx_destruct;
- (long long)contrast;
- (id)identifier;
- (long long)interfaceStyle;
- (bool)isSiriPresentation;
- (void)setContrast:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInterfaceStyle:(long long)arg1;
- (void)setSiriPresentation:(bool)arg1;

@end
