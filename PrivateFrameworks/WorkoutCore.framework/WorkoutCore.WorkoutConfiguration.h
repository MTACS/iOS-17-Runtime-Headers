
@interface WorkoutCore.WorkoutConfiguration : NSObject <WOPersistableObject> {
    void activityType;
    void externalProvider;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastCompletedDate;
    void occurrence;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  scheduledDate;
    void type;
    void usedProtobuf;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  uuid;
}

@property (nonatomic, readonly) NSString *analyticsKey;
@property (nonatomic, readonly) NSString *analyticsSubActivities;
@property (nonatomic, readonly) long long hash;

+ (id)deserializeFromPersistence:(id)arg1;

- (void).cxx_destruct;
- (id)analyticsKey;
- (id)analyticsSubActivities;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)serialize;

@end
