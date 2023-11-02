
@interface BMSafariPageViewEvent : NSObject <BMPersonaAwareIdentifiableContentEvent, BMProtoBufWrapper, BMStoreData, BMStreamValidating, BMStringContentContentEvent, NSSecureCoding> {
    double  _absoluteTimestamp;
    NSString * _content;
    bool  _contentIsReaderText;
    NSString * _contentProtection;
    NSString * _domainId;
    NSString * _personaId;
    NSString * _title;
    NSString * _uniqueId;
    NSURL * _url;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *content;
@property (nonatomic, readonly) bool contentIsReaderText;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *domainId;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *personaId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *uniqueId;
@property (nonatomic, readonly) NSURL *url;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)content;
- (bool)contentIsReaderText;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)domainId;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 title:(id)arg4 content:(id)arg5 contentIsReaderText:(bool)arg6 url:(id)arg7;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 absoluteTimestamp:(double)arg3 title:(id)arg4 content:(id)arg5 contentIsReaderText:(bool)arg6 url:(id)arg7 contentProtection:(id)arg8;
- (id)initWithUniqueId:(id)arg1 domainId:(id)arg2 personaId:(id)arg3 absoluteTimestamp:(double)arg4 title:(id)arg5 content:(id)arg6 contentIsReaderText:(bool)arg7 url:(id)arg8 contentProtection:(id)arg9;
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
- (id)url;

@end