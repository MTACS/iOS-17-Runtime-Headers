
@interface BMDeviceEdgeSelection : BMEventBase <BMStoreData> {
    unsigned int  _addressFamily;
    NSString * _country;
    NSString * _geohash;
    bool  _hasAddressFamily;
    bool  _hasPrefixLength;
    NSString * _interfaceType;
    unsigned int  _prefixLength;
    NSString * _publicIPPrefix;
    NSString * _radioBand;
    NSString * _radioType;
    NSString * _timeZone;
}

@property (nonatomic, readonly) unsigned int addressFamily;
@property (nonatomic, readonly) NSString *country;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *geohash;
@property (nonatomic) bool hasAddressFamily;
@property (nonatomic) bool hasPrefixLength;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *interfaceType;
@property (nonatomic, readonly) unsigned int prefixLength;
@property (nonatomic, readonly) NSString *publicIPPrefix;
@property (nonatomic, readonly) NSString *radioBand;
@property (nonatomic, readonly) NSString *radioType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *timeZone;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)addressFamily;
- (id)country;
- (unsigned int)dataVersion;
- (id)description;
- (id)geohash;
- (bool)hasAddressFamily;
- (bool)hasPrefixLength;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPublicIPPrefix:(id)arg1 addressFamily:(id)arg2 prefixLength:(id)arg3 interfaceType:(id)arg4 radioType:(id)arg5 radioBand:(id)arg6 country:(id)arg7 timeZone:(id)arg8 geohash:(id)arg9;
- (id)interfaceType;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (unsigned int)prefixLength;
- (id)publicIPPrefix;
- (id)radioBand;
- (id)radioType;
- (id)serialize;
- (void)setHasAddressFamily:(bool)arg1;
- (void)setHasPrefixLength:(bool)arg1;
- (id)timeZone;
- (void)writeTo:(id)arg1;

@end
