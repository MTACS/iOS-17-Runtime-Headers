
@interface PPLocationClusterID : NSObject <NSCopying> {
    NSString * _administrativeArea;
    NSString * _locality;
    NSString * _name;
    NSString * _subLocality;
    NSString * _subThoroughfare;
    NSString * _thoroughfare;
}

@property (nonatomic, retain) NSString *administrativeArea;
@property (nonatomic, retain) NSString *locality;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *subLocality;
@property (nonatomic, retain) NSString *subThoroughfare;
@property (nonatomic, retain) NSString *thoroughfare;

+ (bool)asClusterIDPlacemark:(id)arg1 isEqualToPlacemark:(id)arg2;
+ (id)broadenClusterId:(id)arg1;
+ (id)clustersWithRecords:(id)arg1;
+ (id)latLongTableWithClusters:(id)arg1;
+ (id)lookupTableWithRecords:(id)arg1;

- (void).cxx_destruct;
- (id)administrativeArea;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 subThoroughfare:(id)arg2 thoroughfare:(id)arg3 subLocality:(id)arg4 locality:(id)arg5 administrativeArea:(id)arg6;
- (id)initWithPlacemark:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)locality;
- (id)name;
- (void)setAdministrativeArea:(id)arg1;
- (void)setLocality:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSubLocality:(id)arg1;
- (void)setSubThoroughfare:(id)arg1;
- (void)setThoroughfare:(id)arg1;
- (id)subLocality;
- (id)subThoroughfare;
- (id)thoroughfare;

@end
