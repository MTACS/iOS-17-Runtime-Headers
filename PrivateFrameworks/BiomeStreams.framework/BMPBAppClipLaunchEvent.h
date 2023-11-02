
@interface BMPBAppClipLaunchEvent : PBCodable <NSCopying> {
    NSString * _appBundleID;
    NSString * _clipBundleID;
    NSString * _fullURL;
    NSString * _launchReason;
    NSString * _referrerBundleID;
    NSString * _referrerURL;
    NSString * _uRLHash;
    NSString * _webAppBundleID;
}

@property (nonatomic, retain) NSString *appBundleID;
@property (nonatomic, retain) NSString *clipBundleID;
@property (nonatomic, retain) NSString *fullURL;
@property (nonatomic, readonly) bool hasAppBundleID;
@property (nonatomic, readonly) bool hasClipBundleID;
@property (nonatomic, readonly) bool hasFullURL;
@property (nonatomic, readonly) bool hasLaunchReason;
@property (nonatomic, readonly) bool hasReferrerBundleID;
@property (nonatomic, readonly) bool hasReferrerURL;
@property (nonatomic, readonly) bool hasURLHash;
@property (nonatomic, readonly) bool hasWebAppBundleID;
@property (nonatomic, retain) NSString *launchReason;
@property (nonatomic, retain) NSString *referrerBundleID;
@property (nonatomic, retain) NSString *referrerURL;
@property (nonatomic, retain) NSString *uRLHash;
@property (nonatomic, retain) NSString *webAppBundleID;

- (void).cxx_destruct;
- (id)appBundleID;
- (id)clipBundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fullURL;
- (bool)hasAppBundleID;
- (bool)hasClipBundleID;
- (bool)hasFullURL;
- (bool)hasLaunchReason;
- (bool)hasReferrerBundleID;
- (bool)hasReferrerURL;
- (bool)hasURLHash;
- (bool)hasWebAppBundleID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)launchReason;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referrerBundleID;
- (id)referrerURL;
- (void)setAppBundleID:(id)arg1;
- (void)setClipBundleID:(id)arg1;
- (void)setFullURL:(id)arg1;
- (void)setLaunchReason:(id)arg1;
- (void)setReferrerBundleID:(id)arg1;
- (void)setReferrerURL:(id)arg1;
- (void)setURLHash:(id)arg1;
- (void)setWebAppBundleID:(id)arg1;
- (id)uRLHash;
- (id)webAppBundleID;
- (void)writeTo:(id)arg1;

@end
