
@interface HMDLocationClusterGroup : HMFObject {
    CLLocation * _center;
    NSMutableArray * _locations;
}

@property (readonly, copy) CLLocation *center;
@property (readonly) NSMutableArray *locations;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)center;
- (id)initWithCenter:(id)arg1;
- (id)locations;

@end
