
@interface SiriReferenceResolutionDataModel.RRAnnotatedEntity : NSObject {
    void annotations;
    void appBundleId;
    void data;
    void dataType;
    void group;
    void id;
    void metadata;
    void onScreenSaliencyAdjustment;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  saliencyComputedAt;
    void score;
    void userId;
    void usoEntity;
}

@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *dataType;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, copy) NSDate *mentionedAt;
@property (nonatomic, copy) NSDate *nearbyAt;
@property (nonatomic, copy) NSDate *notificationReceivedAt;
@property (nonatomic, copy) NSDate *nowPlayingAt;
@property (nonatomic, copy) NSDate *onscreenAt;
@property (nonatomic, copy) NSDate *saliencyComputedAt;
@property (nonatomic) double score;
@property (nonatomic, copy) NSString *userId;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)data;
- (id)dataType;
- (id)description;
- (id)id;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mentionedAt;
- (id)nearbyAt;
- (id)notificationReceivedAt;
- (id)nowPlayingAt;
- (id)onscreenAt;
- (id)saliencyComputedAt;
- (double)score;
- (void)setDateAnnotationWithKey:(id)arg1 value:(id)arg2;
- (void)setMentionedAt:(id)arg1;
- (void)setNearbyAt:(id)arg1;
- (void)setNotificationReceivedAt:(id)arg1;
- (void)setNowPlayingAt:(id)arg1;
- (void)setOnscreenAt:(id)arg1;
- (void)setSaliencyComputedAt:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setUserId:(id)arg1;
- (id)userId;

@end
