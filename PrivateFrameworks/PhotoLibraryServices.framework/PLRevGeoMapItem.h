
@interface PLRevGeoMapItem : NSObject <NSSecureCoding> {
    NSArray * _backupPlaceInfos;
    NSArray * _finalPlaceInfos;
    NSArray * _sortedPlaceInfos;
}

@property (nonatomic, readonly) NSArray *backupPlaceInfos;
@property (nonatomic, readonly) NSArray *finalPlaceInfos;
@property (nonatomic, readonly) NSArray *sortedPlaceInfos;

+ (id)mapItemWithGEOMapItem:(id)arg1;
+ (id)placeInfoWithName:(id)arg1 geoPlaceInfo:(id)arg2 dominantOrderType:(unsigned long long)arg3;
+ (id /* block */)sortedAdditionalPlaceInfoComparator;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backupPlaceInfos;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)finalPlaceInfos;
- (id)initWithCoder:(id)arg1;
- (id)initWithSortedPlaceInfos:(id)arg1 backupPlaceInfos:(id)arg2 finalPlaceInfos:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)sortedPlaceInfos;

@end
