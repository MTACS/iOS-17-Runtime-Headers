
@interface GDGeoHashVisitEvent : NSObject {
    NSDate * _date;
    unsigned long long  _geoHash;
    bool  _isEnter;
    long long  _level;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) unsigned long long geoHash;
@property (nonatomic, readonly) bool isEnter;
@property (nonatomic, readonly) long long level;

- (void).cxx_destruct;
- (id)date;
- (unsigned long long)geoHash;
- (id)initWithDate:(id)arg1 geoHash:(unsigned long long)arg2 isEnter:(bool)arg3 level:(long long)arg4;
- (bool)isEnter;
- (bool)isEqual:(id)arg1;
- (long long)level;

@end
