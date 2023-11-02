
@interface CLSActivity : CLSObject <CLSRelationable> {
    NSDate * _activityStartDate;
    bool  _backgroundTimeTrackingEnabled;
    NSString * _parentEntityName;
    bool  _paused;
    NSString * _primaryActivityItemIdentifier;
    long long  _type;
}

@property (nonatomic, readonly) NSArray *additionalActivityItems;
@property (getter=isBackgroudTimeTrackingEnabled, nonatomic) bool backgroundTimeTrackingEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *parentEntityName;
@property (nonatomic, retain) CLSActivityItem *primaryActivityItem;
@property (nonatomic, copy) NSString *primaryActivityItemIdentifier;
@property (nonatomic) double progress;
@property (readonly) Class superclass;
@property (nonatomic) long long type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_generatePartialTimeOnSave;
- (void)_generateTimeInterval;
- (id)_init;
- (id)_initWithTargetClass:(Class)arg1;
- (bool)_isObjectActivityItem:(id)arg1 withIdentifier:(id)arg2;
- (bool)_isObjectPrimaryItem:(id)arg1;
- (id)activityItemWithIdentifier:(id)arg1;
- (void)addAdditionalActivityItem:(id)arg1;
- (void)addProgressRangeFromStart:(double)arg1 toEnd:(double)arg2;
- (id)additionalActivityItems;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (long long)effectiveAuthorizationStatus;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isBackgroudTimeTrackingEnabled;
- (bool)isStarted;
- (id)parentEntityName;
- (void)pause;
- (id)primaryActivityItem;
- (id)primaryActivityItemIdentifier;
- (double)progress;
- (void)removeAllActivityItems;
- (void)resume;
- (double)runningDelta;
- (void)setBackgroundTimeTrackingEnabled:(bool)arg1;
- (void)setParentEntityName:(id)arg1;
- (void)setPrimaryActivityItem:(id)arg1;
- (void)setPrimaryActivityItemIdentifier:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setType:(long long)arg1;
- (void)start;
- (void)stop;
- (long long)type;
- (bool)validatePrimaryActivityItemType:(id)arg1;

@end
