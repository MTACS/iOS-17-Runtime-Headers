
@interface BMParsecSearchEngagementEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMProtoBufWrapper, BMStoreData, BMStreamValidating, NSSecureCoding> {
    double  _absoluteTimestamp;
    NSString * _completedQuery;
    NSString * _contentProtection;
    NSString * _domainId;
    NSArray * _entities;
    NSString * _personaId;
    NSString * _resultId;
    NSString * _uniqueId;
    NSString * _userInput;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *completedQuery;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic, readonly) NSArray *entities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) NSString *resultId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueId;
@property (nonatomic, readonly) NSString *userInput;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)completedQuery;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)domainId;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueId:(id)arg1 resultId:(id)arg2 domainId:(id)arg3 absoluteTimestamp:(double)arg4 userInput:(id)arg5 completedQuery:(id)arg6 entities:(id)arg7;
- (id)initWithUniqueId:(id)arg1 resultId:(id)arg2 domainId:(id)arg3 absoluteTimestamp:(double)arg4 userInput:(id)arg5 completedQuery:(id)arg6 entities:(id)arg7 contentProtection:(id)arg8;
- (id)initWithUniqueId:(id)arg1 resultId:(id)arg2 domainId:(id)arg3 personaId:(id)arg4 absoluteTimestamp:(double)arg5 userInput:(id)arg6 completedQuery:(id)arg7 entities:(id)arg8 contentProtection:(id)arg9;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)personaId;
- (id)proto;
- (id)resultId;
- (id)serialize;
- (id)uniqueId;
- (id)userInput;

@end
