
@interface BMRemindersContentEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMProtoBufWrapper, BMStoreData, BMStreamValidating, NSSecureCoding> {
    double  _absoluteTimestamp;
    double  _completionDateTimestamp;
    NSString * _contentProtection;
    NSString * _domainId;
    double  _dueDateTimestamp;
    bool  _isAllDay;
    NSString * _notes;
    NSString * _personaId;
    int  _priority;
    NSString * _title;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) double completionDateTimestamp;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic, readonly) double dueDateTimestamp;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAllDay;
@property (nonatomic, readonly) NSString *notes;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) int priority;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (double)completionDateTimestamp;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)domainId;
- (double)dueDateTimestamp;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 title:(id)arg4 notes:(id)arg5 isAllDay:(bool)arg6 completionDateTimestamp:(double)arg7 dueDateTimestamp:(double)arg8 priority:(int)arg9;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 title:(id)arg4 notes:(id)arg5 isAllDay:(bool)arg6 completionDateTimestamp:(double)arg7 dueDateTimestamp:(double)arg8 priority:(int)arg9 contentProtection:(id)arg10;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 personaId:(id)arg3 absoluteTimestamp:(double)arg4 title:(id)arg5 notes:(id)arg6 isAllDay:(bool)arg7 completionDateTimestamp:(double)arg8 dueDateTimestamp:(double)arg9 priority:(int)arg10 contentProtection:(id)arg11;
- (bool)isAllDay;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)notes;
- (id)personaId;
- (int)priority;
- (id)proto;
- (id)serialize;
- (id)title;
- (id)uniqueId;

@end
