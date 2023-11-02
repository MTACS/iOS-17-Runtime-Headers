
@interface BMProactiveHarvestingPhotosView : BMEventBase <BMStoreData> {
    NSString * _contentProtection;
    bool  _hasRaw_absoluteTimestamp;
    NSArray * _locations;
    NSString * _personaId;
    double  _raw_absoluteTimestamp;
    NSString * _uniqueID;
}

@property (nonatomic, readonly) NSDate *absoluteTimestamp;
@property (nonatomic, readonly) NSString *contentProtection;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *locations;
@property (nonatomic, readonly) NSString *personaId;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *uniqueID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_locationsJSONArray;
- (id)absoluteTimestamp;
- (id)contentProtection;
- (unsigned int)dataVersion;
- (id)description;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithLocations:(id)arg1 absoluteTimestamp:(id)arg2 uniqueID:(id)arg3 contentProtection:(id)arg4 personaId:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)locations;
- (id)personaId;
- (id)serialize;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
