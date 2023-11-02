
@interface BMAppIntent : BMEventBase <ATXShadowEventProtocol, BMIdentifiable, BMStoreData> {
    NSString * _bundleID;
    bool  _donatedBySiri;
    NSString * _groupIdentifier;
    int  _handlingStatus;
    bool  _hasDonatedBySiri;
    bool  _hasRaw_absoluteTimestamp;
    NSString * _intentClass;
    int  _intentType;
    NSString * _intentVerb;
    NSData * _interaction;
    int  _interactionDirection;
    NSString * _itemID;
    double  _raw_absoluteTimestamp;
    NSString * _sourceID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool donatedBySiri;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic, readonly) int handlingStatus;
@property (nonatomic) bool hasDonatedBySiri;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *intentClass;
@property (nonatomic, readonly) int intentType;
@property (nonatomic, readonly) NSString *intentVerb;
@property (nonatomic, readonly) NSData *interaction;
@property (nonatomic, readonly) int interactionDirection;
@property (nonatomic, readonly) NSString *itemID;
@property (nonatomic, readonly) NSString *sourceID;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/BiomeLibrary.framework/BiomeLibrary

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)absoluteTimestamp;
- (id)bundleID;
- (unsigned int)dataVersion;
- (id)description;
- (bool)donatedBySiri;
- (id)groupIdentifier;
- (int)handlingStatus;
- (bool)hasDonatedBySiri;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithAbsoluteTimestamp:(id)arg1 bundleID:(id)arg2 sourceID:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(int)arg6 handlingStatus:(int)arg7 interaction:(id)arg8 itemID:(id)arg9 donatedBySiri:(id)arg10 interactionDirection:(int)arg11;
- (id)initWithAbsoluteTimestamp:(id)arg1 bundleID:(id)arg2 sourceID:(id)arg3 intentClass:(id)arg4 intentVerb:(id)arg5 intentType:(int)arg6 handlingStatus:(int)arg7 interaction:(id)arg8 itemID:(id)arg9 donatedBySiri:(id)arg10 interactionDirection:(int)arg11 groupIdentifier:(id)arg12;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)intentClass;
- (int)intentType;
- (id)intentVerb;
- (id)interaction;
- (int)interactionDirection;
- (bool)isEqual:(id)arg1;
- (id)itemID;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasDonatedBySiri:(bool)arg1;
- (id)sourceID;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal

- (id)atxAction;
- (id)date;

@end
