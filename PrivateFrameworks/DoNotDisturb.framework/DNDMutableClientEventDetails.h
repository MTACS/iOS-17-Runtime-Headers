
@interface DNDMutableClientEventDetails : DNDClientEventDetails

@property (nonatomic) unsigned long long behavior;
@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSString *filterCriteria;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool notifyAnyway;
@property (nonatomic, copy) DNDContactHandle *sender;
@property (nonatomic) bool shouldAlwaysInterrupt;
@property (nonatomic, copy) NSString *threadIdentifier;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long urgency;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setFilterCriteria:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setNotifyAnyway:(bool)arg1;
- (void)setSender:(id)arg1;
- (void)setShouldAlwaysInterrupt:(bool)arg1;
- (void)setThreadIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUrgency:(unsigned long long)arg1;

@end
