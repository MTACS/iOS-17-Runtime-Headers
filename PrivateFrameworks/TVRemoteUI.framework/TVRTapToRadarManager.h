
@interface TVRTapToRadarManager : NSObject {
    NSURLComponents * _urlComponents;
}

@property (nonatomic, retain) NSURLComponents *urlComponents;

+ (id)_captureScreenshot;
+ (id)bugImage;
+ (void)fileRadarWithTitle:(id)arg1 description:(id)arg2;

- (void).cxx_destruct;
- (void)fileRadar;
- (void)setUrlComponents:(id)arg1;
- (id)urlComponents;

@end
