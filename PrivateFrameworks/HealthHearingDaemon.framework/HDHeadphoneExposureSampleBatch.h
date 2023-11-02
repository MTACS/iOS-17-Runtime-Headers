
@interface HDHeadphoneExposureSampleBatch : NSObject {
    NSNumber * _anchor;
    bool  _canTriggerUserNotification;
    bool  _journaled;
    NSArray * _samples;
}

@property (nonatomic, retain) NSNumber *anchor;
@property (nonatomic) bool canTriggerUserNotification;
@property (getter=isJournaled, nonatomic) bool journaled;
@property (nonatomic, retain) NSArray *samples;

+ (id)batchWithAddedSamples:(id)arg1 anchor:(id)arg2;
+ (id)batchWithJournaledSamples:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithSamples:(id)arg1 journaled:(bool)arg2 anchor:(id)arg3;
- (id)anchor;
- (bool)canTriggerUserNotification;
- (bool)isJournaled;
- (id)samples;
- (void)setAnchor:(id)arg1;
- (void)setCanTriggerUserNotification:(bool)arg1;
- (void)setJournaled:(bool)arg1;
- (void)setSamples:(id)arg1;

@end
