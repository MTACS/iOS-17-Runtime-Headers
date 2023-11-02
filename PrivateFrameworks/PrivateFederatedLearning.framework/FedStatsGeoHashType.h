
@interface FedStatsGeoHashType : FedStatsBoundedULongType {
    unsigned long long  _hashLength;
}

@property (nonatomic) unsigned long long hashLength;

+ (id)createFromDict:(id)arg1 possibleError:(id*)arg2;
+ (unsigned long long)geoHashCharToInteger:(BOOL)arg1;

- (id)decodeFromIndex:(id)arg1 possibleError:(id*)arg2;
- (id)encodeToIndex:(id)arg1 possibleError:(id*)arg2;
- (unsigned long long)hashLength;
- (id)initWithGeoHashLength:(unsigned long long)arg1;
- (id)sampleForIndex:(unsigned long long)arg1;
- (void)setHashLength:(unsigned long long)arg1;

@end
