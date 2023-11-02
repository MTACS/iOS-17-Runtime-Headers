
@interface ENRegionHistory : NSObject <NSSecureCoding> {
    NSMutableArray * _regionHistory;
}

@property (nonatomic, readonly) NSMutableArray *regionHistory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addRegionVisit:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)getRegionVisits;
- (id)getRegions;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegionVisits:(id)arg1;
- (id)regionHistory;
- (void)removeAllRegionVisits;
- (void)removeRegionVisit:(id)arg1;

@end
