
@interface CLSBusinessItem : NSObject <NSSecureCoding, PGGraphPlaceItem> {
    NSArray * _businessCategories;
    bool  _cached;
    NSArray * _categories;
    NSString * _geoServiceProvider;
    NSString * _isoCountryCode;
    unsigned long long  _muid;
    NSString * _name;
    CLCircularRegion * _region;
    long long  _venueCapacity;
}

@property (nonatomic, copy) NSArray *businessCategories;
@property (nonatomic) bool cached;
@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, readonly) NSArray *categoryNames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *geoServiceProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isEnriched;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic) unsigned long long muid;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) CLCircularRegion *region;
@property (nonatomic, retain) CLCircularRegion *region;
@property (readonly) Class superclass;
@property (nonatomic) long long venueCapacity;

// Image: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit

+ (id)_businessCategoriesFromGeoMapItems:(id)arg1;
+ (double)_defaultRadiusForCategories:(id)arg1;
+ (id)_regionFromMapItem:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)businessCategories;
- (bool)cached;
- (id)categories;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)geoServiceProvider;
- (unsigned long long)hash;
- (id)initFromMapItem:(id)arg1 isoCountryCode:(id)arg2 categoryOnly:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 region:(id)arg2 categories:(id)arg3;
- (bool)isEnriched;
- (id)isoCountryCode;
- (unsigned long long)muid;
- (id)name;
- (id)region;
- (void)setBusinessCategories:(id)arg1;
- (void)setCached:(bool)arg1;
- (void)setCategories:(id)arg1;
- (void)setGeoServiceProvider:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setMuid:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setVenueCapacity:(long long)arg1;
- (long long)venueCapacity;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (id)categoryNames;

@end
