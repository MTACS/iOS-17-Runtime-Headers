
@interface LiveService : INObject

@property (nonatomic, copy) NSString *appAdamId;
@property (nonatomic, retain) ContentImage *appImage;
@property (nonatomic, copy) NSString *appName;
@property (nonatomic, copy) NSString *appStoreUrl;
@property (nonatomic, copy) NSString *channelId;
@property (nonatomic, copy) NSString *channelName;
@property (nonatomic, retain) NSNumber *isInstalled;
@property (nonatomic, retain) NSNumber *isRemoteResult;
@property (nonatomic, retain) NSNumber *isSubscribed;
@property (nonatomic, copy) NSString *liveServiceId;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *playPunchoutUrl;

+ (bool)supportsSecureCoding;

- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3;

@end
