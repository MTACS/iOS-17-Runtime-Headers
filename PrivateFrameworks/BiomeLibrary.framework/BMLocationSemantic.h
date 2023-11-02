
@interface BMLocationSemantic : BMEventBase <BMStoreData> {
    bool  _hasStarting;
    int  _placeType;
    NSString * _raw_loiIdentifier;
    bool  _starting;
    int  _userSpecificPlaceType;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasStarting;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *loiIdentifier;
@property (nonatomic, readonly) int placeType;
@property (nonatomic, readonly) bool starting;
@property (readonly) Class superclass;
@property (nonatomic, readonly) int userSpecificPlaceType;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasStarting;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithStarting:(id)arg1 userSpecificPlaceType:(int)arg2 placeType:(int)arg3 loiIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)loiIdentifier;
- (int)placeType;
- (id)serialize;
- (void)setHasStarting:(bool)arg1;
- (bool)starting;
- (int)userSpecificPlaceType;
- (void)writeTo:(id)arg1;

@end
