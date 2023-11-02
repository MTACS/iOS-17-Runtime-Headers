
@interface BMSiriQueryEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMProtoBufWrapper, BMStoreData, NSSecureCoding> {
    double  _absoluteTimestamp;
    NSString * _contentProtection;
    NSString * _personaId;
    NSString * _query;
    NSArray * _results;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueId:(id)arg1 absoluteTimestamp:(double)arg2 query:(id)arg3 results:(id)arg4;
- (id)initWithUniqueId:(id)arg1 absoluteTimestamp:(double)arg2 query:(id)arg3 results:(id)arg4 contentProtection:(id)arg5;
- (id)initWithUniqueId:(id)arg1 personaId:(id)arg2 absoluteTimestamp:(double)arg3 query:(id)arg4 results:(id)arg5 contentProtection:(id)arg6;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)personaId;
- (id)proto;
- (id)query;
- (id)results;
- (id)serialize;
- (id)uniqueId;

@end
