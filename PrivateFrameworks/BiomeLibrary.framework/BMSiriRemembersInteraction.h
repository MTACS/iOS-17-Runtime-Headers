
@interface BMSiriRemembersInteraction : BMEventBase <BMStoreData> {
    NSString * _appBundleId;
    NSString * _appIntentInteractionIdentifier;
    long long  _contentHash;
    int  _direction;
    NSString * _domain;
    double  _durationInSeconds;
    NSString * _fields;
    NSString * _groupIdentifier;
    bool  _hasContentHash;
    bool  _hasDurationInSeconds;
    bool  _hasIsDonatedBySiri;
    bool  _hasRaw_startDate;
    NSString * _identifier;
    NSArray * _interactionFields;
    int  _interactionSource;
    bool  _isDonatedBySiri;
    double  _raw_startDate;
    int  _status;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *appBundleId;
@property (nonatomic, readonly) NSString *appIntentInteractionIdentifier;
@property (nonatomic, readonly) long long contentHash;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int direction;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) double durationInSeconds;
@property (nonatomic, readonly) NSString *fields;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic) bool hasContentHash;
@property (nonatomic) bool hasDurationInSeconds;
@property (nonatomic) bool hasIsDonatedBySiri;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *interactionFields;
@property (nonatomic, readonly) int interactionSource;
@property (nonatomic, readonly) bool isDonatedBySiri;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) int status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_interactionFieldsJSONArray;
- (id)appBundleId;
- (id)appIntentInteractionIdentifier;
- (long long)contentHash;
- (unsigned int)dataVersion;
- (id)description;
- (int)direction;
- (id)domain;
- (double)durationInSeconds;
- (id)fields;
- (id)groupIdentifier;
- (bool)hasContentHash;
- (bool)hasDurationInSeconds;
- (bool)hasIsDonatedBySiri;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 domain:(id)arg3 appBundleId:(id)arg4 status:(int)arg5 direction:(int)arg6 isDonatedBySiri:(id)arg7 startDate:(id)arg8 durationInSeconds:(id)arg9 interactionFields:(id)arg10;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 domain:(id)arg3 appBundleId:(id)arg4 status:(int)arg5 direction:(int)arg6 isDonatedBySiri:(id)arg7 startDate:(id)arg8 durationInSeconds:(id)arg9 interactionFields:(id)arg10 fields:(id)arg11;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 domain:(id)arg3 appBundleId:(id)arg4 status:(int)arg5 direction:(int)arg6 isDonatedBySiri:(id)arg7 startDate:(id)arg8 durationInSeconds:(id)arg9 interactionFields:(id)arg10 fields:(id)arg11 groupIdentifier:(id)arg12;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 domain:(id)arg3 appBundleId:(id)arg4 status:(int)arg5 direction:(int)arg6 isDonatedBySiri:(id)arg7 startDate:(id)arg8 durationInSeconds:(id)arg9 interactionFields:(id)arg10 fields:(id)arg11 groupIdentifier:(id)arg12 appIntentInteractionIdentifier:(id)arg13 interactionSource:(int)arg14;
- (id)initWithIdentifier:(id)arg1 type:(id)arg2 domain:(id)arg3 appBundleId:(id)arg4 status:(int)arg5 direction:(int)arg6 isDonatedBySiri:(id)arg7 startDate:(id)arg8 durationInSeconds:(id)arg9 interactionFields:(id)arg10 fields:(id)arg11 groupIdentifier:(id)arg12 appIntentInteractionIdentifier:(id)arg13 interactionSource:(int)arg14 contentHash:(id)arg15;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)interactionFields;
- (int)interactionSource;
- (bool)isDonatedBySiri;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasContentHash:(bool)arg1;
- (void)setHasDurationInSeconds:(bool)arg1;
- (void)setHasIsDonatedBySiri:(bool)arg1;
- (id)startDate;
- (int)status;
- (id)type;
- (void)writeTo:(id)arg1;

@end
