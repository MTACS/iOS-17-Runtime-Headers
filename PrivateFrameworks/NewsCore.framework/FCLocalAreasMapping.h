
@interface FCLocalAreasMapping : NSObject <FCLocalAreasProvider, NSCopying, NSSecureCoding> {
    NSArray * _areas;
    NSData * _data;
    NSDictionary * _regionMap;
}

@property (nonatomic, retain) NSArray *areas;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *regionMap;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)areas;
- (id)areasForLocation:(id)arg1;
- (id)autoFavoriteTagIDsForLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)filterOuterRegions:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)regionMap;
- (id)regionsForLocation:(id)arg1;
- (void)setAreas:(id)arg1;
- (void)setData:(id)arg1;
- (void)setRegionMap:(id)arg1;

@end
