
@interface GEOAppStoreAppClip : NSObject {
    NSURL * _appClipURL;
    NSString * _appShortName;
    NSURL * _artworkURL;
    NSString * _bundleID;
    NSString * _provider;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) NSURL *appClipURL;
@property (nonatomic, readonly) NSString *appShortName;
@property (nonatomic, retain) NSURL *artworkURL;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) NSString *provider;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)appClipURL;
- (id)appShortName;
- (id)artworkURL;
- (id)bundleID;
- (id)description;
- (id)initWithBundleID:(id)arg1 title:(id)arg2 subtitle:(id)arg3 appShortName:(id)arg4 appClipURL:(id)arg5 artworkURL:(id)arg6 providerName:(id)arg7;
- (id)provider;
- (void)setAppClipURL:(id)arg1;
- (void)setArtworkURL:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
