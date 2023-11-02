
@interface ATXHeroEntry : NSObject {
    unsigned long long  _adamId;
    bool  _isTouristApp;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _location;
    NSString * _poiCategory;
    NSNumber * _poiMuid;
    unsigned long long  _radiusInMeters;
    unsigned long long  _rank;
    NSString * _urlHash;
}

@property (nonatomic, readonly) unsigned long long adamId;
@property (nonatomic, readonly) bool isTouristApp;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } location;
@property (nonatomic, readonly, copy) NSString *poiCategory;
@property (nonatomic, readonly, copy) NSNumber *poiMuid;
@property (nonatomic, readonly) unsigned long long radiusInMeters;
@property (nonatomic, readonly) unsigned long long rank;
@property (nonatomic, readonly, copy) NSString *urlHash;

- (void).cxx_destruct;
- (unsigned long long)adamId;
- (id)heroDataForLocation:(id)arg1;
- (id)init;
- (id)initWithAdamId:(unsigned long long)arg1 urlHash:(id)arg2 location:(struct CLLocationCoordinate2D { double x1; double x2; })arg3 radiusInMeters:(unsigned long long)arg4 rank:(unsigned long long)arg5 isTouristApp:(bool)arg6 poiCategory:(id)arg7 poiMuid:(id)arg8;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAppAndClipEntry:(id)arg1;
- (bool)isTouristApp;
- (struct CLLocationCoordinate2D { double x1; double x2; })location;
- (id)poiCategory;
- (id)poiMuid;
- (unsigned long long)radiusInMeters;
- (unsigned long long)rank;
- (id)urlHash;

@end
