
@interface HealthExposureNotificationUI.ENUIPublicHealthHeader : NSObject {
    void backgroundColor;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logoURL;
    void style;
    void subtitle;
    void textColor;
    void title;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) NSURL *logoURL;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)backgroundColor;
- (id)init;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 backgroundColor:(id)arg3 textColor:(id)arg4 logoURL:(id)arg5 style:(long long)arg6;
- (id)logoURL;
- (long long)style;
- (id)subtitle;
- (id)textColor;
- (id)title;

@end
