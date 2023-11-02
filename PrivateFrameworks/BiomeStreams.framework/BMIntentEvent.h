
@interface BMIntentEvent : BMEventBase <BMEventAppAssociating, BMIdentifiable, BMProtoBufWrapper, BMPublicStreamEvent, BMStoreData, NSSecureCoding> {
    double  _absoluteTimestamp;
    NSString * _bundleID;
    bool  _donatedBySiri;
    NSString * _groupIdentifier;
    NSString * _intentClass;
    long long  _intentHandlingStatus;
    long long  _intentType;
    NSString * _intentVerb;
    NSData * _interaction;
    long long  _interactionDirection;
    NSString * _itemID;
    NSString * _sourceId;
}

@property (nonatomic) double absoluteTimestamp;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool donatedBySiri;
@property (nonatomic, copy) NSString *groupIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, copy) NSString *intentClass;
@property (nonatomic) long long intentHandlingStatus;
@property (nonatomic) long long intentType;
@property (nonatomic, copy) NSString *intentVerb;
@property (nonatomic, copy) NSData *interaction;
@property (nonatomic) long long interactionDirection;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic, copy) NSString *sourceId;
@property (readonly) Class superclass;

+ (id)eventWithDKEvent:(id)arg1;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (long long)stream;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)bundleID;
- (bool)checkAndReportDecodingFailureIfNeededForCFAbsoluteTime:(double)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForid:(id)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (bool)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned int)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (unsigned int)dataVersion;
- (bool)donatedBySiri;
- (id)encodeAsProto;
- (void)encodeWithCoder:(id)arg1;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAbsoluteTime:(double)arg1 bundleId:(id)arg2 sourceId:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(long long)arg6 intentHandlingStatus:(long long)arg7 interaction:(id)arg8;
- (id)initWithAbsoluteTime:(double)arg1 bundleId:(id)arg2 sourceId:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(long long)arg6 intentHandlingStatus:(long long)arg7 interaction:(id)arg8 itemID:(id)arg9;
- (id)initWithAbsoluteTime:(double)arg1 bundleId:(id)arg2 sourceId:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(long long)arg6 intentHandlingStatus:(long long)arg7 interaction:(id)arg8 itemID:(id)arg9 donatedBySiri:(bool)arg10 interactionDirection:(long long)arg11;
- (id)initWithAbsoluteTime:(double)arg1 bundleId:(id)arg2 sourceId:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(long long)arg6 intentHandlingStatus:(long long)arg7 interaction:(id)arg8 itemID:(id)arg9 donatedBySiri:(bool)arg10 interactionDirection:(long long)arg11 groupIdentifier:(id)arg12;
- (id)initWithCoder:(id)arg1;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)intentClass;
- (long long)intentHandlingStatus;
- (long long)intentType;
- (id)intentVerb;
- (id)interaction;
- (long long)interactionDirection;
- (bool)isEqual:(id)arg1;
- (id)itemID;
- (id)proto;
- (id)serialize;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setBundleID:(id)arg1;
- (void)setDonatedBySiri:(bool)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setIntentClass:(id)arg1;
- (void)setIntentHandlingStatus:(long long)arg1;
- (void)setIntentType:(long long)arg1;
- (void)setIntentVerb:(id)arg1;
- (void)setInteraction:(id)arg1;
- (void)setInteractionDirection:(long long)arg1;
- (void)setItemID:(id)arg1;
- (void)setSourceId:(id)arg1;
- (id)sourceId;

@end
