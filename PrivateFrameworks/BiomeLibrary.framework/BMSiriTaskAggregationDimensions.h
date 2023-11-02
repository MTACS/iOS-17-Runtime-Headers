
@interface BMSiriTaskAggregationDimensions : BMEventBase <BMStoreData> {
    NSString * _countryCode;
    NSString * _deviceType;
    int  _productArea;
    NSString * _siriInputLocale;
    NSString * _systemBuild;
    NSString * _systemLocale;
}

@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int productArea;
@property (nonatomic, readonly) NSString *siriInputLocale;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *systemBuild;
@property (nonatomic, readonly) NSString *systemLocale;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)countryCode;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceType;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithProductArea:(int)arg1 siriInputLocale:(id)arg2 systemLocale:(id)arg3 countryCode:(id)arg4 deviceType:(id)arg5 systemBuild:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (int)productArea;
- (id)serialize;
- (id)siriInputLocale;
- (id)systemBuild;
- (id)systemLocale;
- (void)writeTo:(id)arg1;

@end
