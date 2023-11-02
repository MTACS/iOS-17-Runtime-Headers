
@interface BMMomentsEngagementAppEntryEvent : BMEventBase <BMStoreData> {
    int  _addedCharacters;
    NSString * _appEntryEventType;
    NSArray * _bundleEvergreenTypes;
    NSArray * _bundleInterfaceTypes;
    NSString * _clientIdentifier;
    bool  _hasAddedCharacters;
    bool  _hasRaw_endTime;
    bool  _hasRaw_startTime;
    bool  _hasRaw_timestamp;
    bool  _hasTotalCharacters;
    NSArray * _identifier;
    double  _raw_endTime;
    double  _raw_startTime;
    double  _raw_timestamp;
    int  _totalCharacters;
    int  _type;
    NSArray * _usedPhotoAssets;
}

@property (nonatomic, readonly) int addedCharacters;
@property (nonatomic, readonly) NSString *appEntryEventType;
@property (nonatomic, readonly) NSArray *bundleEvergreenTypes;
@property (nonatomic, readonly) NSArray *bundleInterfaceTypes;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endTime;
@property (nonatomic) bool hasAddedCharacters;
@property (nonatomic) bool hasTotalCharacters;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *identifier;
@property (nonatomic, readonly) NSDate *startTime;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly) int totalCharacters;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly) NSArray *usedPhotoAssets;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_bundleEvergreenTypesJSONArray;
- (id)_bundleInterfaceTypesJSONArray;
- (id)_identifierJSONArray;
- (id)_usedPhotoAssetsJSONArray;
- (int)addedCharacters;
- (id)appEntryEventType;
- (id)bundleEvergreenTypes;
- (id)bundleInterfaceTypes;
- (id)clientIdentifier;
- (unsigned int)dataVersion;
- (id)description;
- (id)endTime;
- (bool)hasAddedCharacters;
- (bool)hasTotalCharacters;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithType:(int)arg1 clientIdentifier:(id)arg2 timestamp:(id)arg3 identifier:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 totalCharacters:(id)arg7 addedCharacters:(id)arg8 usedPhotoAssets:(id)arg9;
- (id)initWithType:(int)arg1 clientIdentifier:(id)arg2 timestamp:(id)arg3 identifier:(id)arg4 startTime:(id)arg5 endTime:(id)arg6 totalCharacters:(id)arg7 addedCharacters:(id)arg8 usedPhotoAssets:(id)arg9 appEntryEventType:(id)arg10 bundleInterfaceTypes:(id)arg11 bundleEvergreenTypes:(id)arg12;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasAddedCharacters:(bool)arg1;
- (void)setHasTotalCharacters:(bool)arg1;
- (id)startTime;
- (id)timestamp;
- (int)totalCharacters;
- (int)type;
- (id)usedPhotoAssets;
- (void)writeTo:(id)arg1;

@end
