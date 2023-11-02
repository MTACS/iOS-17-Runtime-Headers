
@interface BMPhotosKnowledgeGraphEnrichmentEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMProtoBufWrapper, BMStoreData, BMStreamValidating, NSSecureCoding> {
    double  _absoluteTimestamp;
    NSString * _contentProtection;
    NSArray * _entities;
    NSArray * _locations;
    NSString * _personaId;
    NSArray * _topics;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic, readonly) NSArray *entities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSString *personaId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *topics;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)entities;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueId:(id)arg1 absoluteTimestamp:(double)arg2 topics:(id)arg3 entities:(id)arg4 locations:(id)arg5;
- (id)initWithUniqueId:(id)arg1 absoluteTimestamp:(double)arg2 topics:(id)arg3 entities:(id)arg4 locations:(id)arg5 contentProtection:(id)arg6;
- (id)initWithUniqueId:(id)arg1 personaId:(id)arg2 absoluteTimestamp:(double)arg3 topics:(id)arg4 entities:(id)arg5 locations:(id)arg6 contentProtection:(id)arg7;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)locations;
- (id)personaId;
- (id)proto;
- (id)serialize;
- (id)topics;
- (id)uniqueId;

@end
