
@interface RPStoreInfo : NSObject {
    NSURL * _appArtworkURL;
    NSString * _appName;
    NSString * _author;
    NSString * _bundleID;
    NSURL * _itemURL;
}

@property (nonatomic, retain) NSURL *appArtworkURL;
@property (nonatomic, retain) NSString *appName;
@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSURL *itemURL;

- (void).cxx_destruct;
- (id)appArtworkURL;
- (id)appName;
- (id)author;
- (id)bundleID;
- (id)dictionary;
- (id)itemURL;
- (void)setAppArtworkURL:(id)arg1;
- (void)setAppName:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setItemURL:(id)arg1;

@end
