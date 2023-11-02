
@interface BMThirdPartyAppContentEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMProtoBufWrapper, BMStoreData, BMStreamValidating, BMStringContentContentEvent, NSSecureCoding> {
    double  _absoluteTimestamp;
    NSString * _bundleId;
    NSString * _comment;
    NSString * _content;
    NSString * _contentProtection;
    NSString * _desc;
    NSString * _domainId;
    NSString * _personaId;
    NSString * _title;
    NSString * _uniqueId;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *comment;
@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *desc;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)bundleId;
- (id)comment;
- (id)content;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)desc;
- (id)domainId;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 bundleId:(id)arg3 absoluteTimestamp:(double)arg4 title:(id)arg5 desc:(id)arg6 comment:(id)arg7 content:(id)arg8;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 bundleId:(id)arg3 absoluteTimestamp:(double)arg4 title:(id)arg5 desc:(id)arg6 comment:(id)arg7 content:(id)arg8 contentProtection:(id)arg9;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 bundleId:(id)arg3 personaId:(id)arg4 absoluteTimestamp:(double)arg5 title:(id)arg6 desc:(id)arg7 comment:(id)arg8 content:(id)arg9 contentProtection:(id)arg10;
- (bool)isCompleteWithContext:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValidWithContext:(id)arg1 error:(id*)arg2;
- (id)json;
- (id)jsonDict;
- (id)personaId;
- (id)proto;
- (id)serialize;
- (id)title;
- (id)uniqueId;

@end
