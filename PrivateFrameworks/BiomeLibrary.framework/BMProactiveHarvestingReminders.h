
@interface BMProactiveHarvestingReminders : BMEventBase <BMStoreData> {
    NSString * _contentProtection;
    NSString * _domainID;
    bool  _hasIsAllDay;
    bool  _hasPriority;
    bool  _hasRaw_absoluteTimestamp;
    bool  _hasRaw_completionDateTimestamp;
    bool  _hasRaw_dueDateTimestamp;
    bool  _isAllDay;
    NSString * _notes;
    NSString * _personaId;
    int  _priority;
    double  _raw_absoluteTimestamp;
    double  _raw_completionDateTimestamp;
    double  _raw_dueDateTimestamp;
    NSString * _title;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSDate *completionDateTimestamp;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainID;
@property (nonatomic, readonly) NSDate *dueDateTimestamp;
@property (nonatomic) bool hasIsAllDay;
@property (nonatomic) bool hasPriority;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllDay;
@property (nonatomic, readonly) NSString *notes;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) int priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)completionDateTimestamp;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)description;
- (id)domainID;
- (id)dueDateTimestamp;
- (bool)hasIsAllDay;
- (bool)hasPriority;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithUniqueID:(id)arg1 domainID:(id)arg2 absoluteTimestamp:(id)arg3 title:(id)arg4 notes:(id)arg5 isAllDay:(id)arg6 completionDateTimestamp:(id)arg7 dueDateTimestamp:(id)arg8 priority:(id)arg9 contentProtection:(id)arg10 personaId:(id)arg11;
- (bool)isAllDay;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)notes;
- (id)personaId;
- (int)priority;
- (id)serialize;
- (void)setHasIsAllDay:(bool)arg1;
- (void)setHasPriority:(bool)arg1;
- (id)title;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
