
@interface MSDPlatform : NSObject {
    bool  _iOS;
    bool  _macOS;
    NSString * _platformType;
    bool  _rOS;
    bool  _tvOS;
    bool  _watchOS;
}

@property bool iOS;
@property bool macOS;
@property (nonatomic, retain) NSString *platformType;
@property bool rOS;
@property bool tvOS;
@property bool watchOS;

+ (bool)iOSHub;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)iOS;
- (id)init;
- (bool)isValidProductList:(id)arg1;
- (bool)macOS;
- (id)platformType;
- (bool)rOS;
- (void)raiseInvalidProductListExceptionWithReason:(id)arg1;
- (void)setIOS:(bool)arg1;
- (void)setMacOS:(bool)arg1;
- (void)setPlatformType:(id)arg1;
- (void)setPlatformWithManifestProductList:(id)arg1;
- (void)setROS:(bool)arg1;
- (void)setTvOS:(bool)arg1;
- (void)setWatchOS:(bool)arg1;
- (bool)tvOS;
- (bool)watchOS;

@end
