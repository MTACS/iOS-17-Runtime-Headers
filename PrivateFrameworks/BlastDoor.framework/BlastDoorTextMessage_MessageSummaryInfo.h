
@interface BlastDoorTextMessage_MessageSummaryInfo : NSObject {
    void textMessage_MessageSummaryInfo;
}

@property (nonatomic, readonly) NSString *associatedBalloonBundleID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool hasBeenRetried;
@property (nonatomic, readonly) bool has_hasBeenRetried;
@property (nonatomic, readonly) bool has_updatedDateWithServerTime;
@property (nonatomic, readonly) NSString *sourceApplicationID;
@property (nonatomic, readonly) bool updatedDateWithServerTime;

- (void).cxx_destruct;
- (id)associatedBalloonBundleID;
- (id)description;
- (bool)hasBeenRetried;
- (bool)has_hasBeenRetried;
- (bool)has_updatedDateWithServerTime;
- (id)init;
- (id)sourceApplicationID;
- (bool)updatedDateWithServerTime;

@end
