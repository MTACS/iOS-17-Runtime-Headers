
@interface BMMicroLocationLocalizationNumDevicesPerTechnology : BMEventBase <BMStoreData> {
    bool  _hasNumber;
    int  _number;
    NSString * _technologyString;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasNumber;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int number;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *technologyString;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasNumber;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithTechnologyString:(id)arg1 number:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)number;
- (id)serialize;
- (void)setHasNumber:(bool)arg1;
- (id)technologyString;
- (void)writeTo:(id)arg1;

@end
