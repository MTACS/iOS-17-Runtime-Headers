
@interface BMAppClipLaunchEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _URLHash;
    NSString * _appBundleID;
    NSString * _clipBundleID;
    NSURL * _fullURL;
    NSString * _launchReason;
    NSString * _referrerBundleID;
    NSURL * _referrerURL;
    NSString * _webAppBundleID;
}

@property (nonatomic, readonly, copy) NSString *URLHash;
@property (nonatomic, readonly, copy) NSString *appBundleID;
@property (nonatomic, readonly, copy) NSString *clipBundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSURL *fullURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *launchReason;
@property (nonatomic, readonly, copy) NSString *referrerBundleID;
@property (nonatomic, readonly, copy) NSURL *referrerURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *webAppBundleID;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (id)URLHash;
- (id)appBundleID;
- (id)clipBundleID;
- (unsigned int)dataVersion;
- (id)description;
- (id)encodeAsProto;
- (id)fullURL;
- (unsigned long long)hash;
- (id)init;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithURLHash:(id)arg1 clipBundleID:(id)arg2 appBundleID:(id)arg3 webAppBundleID:(id)arg4 launchReason:(id)arg5 fullURL:(id)arg6 referrerURL:(id)arg7 referrerBundleID:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)launchReason;
- (id)proto;
- (id)referrerBundleID;
- (id)referrerURL;
- (id)serialize;
- (id)webAppBundleID;

@end
