
@interface ICQQuotaApp : NSObject {
    NSString * _bundleID;
    NSURL * _iconURL;
    NSString * _localizedName;
    NSString * _name;
    NSURL * _thumbnailURL;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSURL *iconURL;
@property (nonatomic, retain) NSString *localizedName;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSURL *thumbnailURL;

- (void).cxx_destruct;
- (id)bundleID;
- (id)description;
- (id)iconURL;
- (id)localizedName;
- (id)name;
- (void)setBundleID:(id)arg1;
- (void)setIconURL:(id)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setThumbnailURL:(id)arg1;
- (id)thumbnailURL;

@end
