
@interface VIRefineRegionResult : NSObject {
    NSArray * _refinedRegions;
    unsigned long long  _version;
}

@property (nonatomic, readonly, copy) NSArray *refinedRegions;
@property (nonatomic, readonly) unsigned long long version;

- (void).cxx_destruct;
- (id)initWithRefinedRegions:(id)arg1 version:(unsigned long long)arg2;
- (id)refinedRegions;
- (unsigned long long)version;

@end
