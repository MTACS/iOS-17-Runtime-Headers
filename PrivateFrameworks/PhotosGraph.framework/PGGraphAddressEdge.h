
@interface PGGraphAddressEdge : PGGraphOptimizedEdge <MAUniquelyIdentifiableEdge> {
    unsigned long long  _numberOfAssets;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _photoCoordinate;
    double  _relevance;
    NSDate * _universalEndDate;
    NSDate * _universalStartDate;
}

@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } photoCoordinate;
@property (nonatomic, readonly) CLLocation *photoLocation;
@property (nonatomic, readonly) double relevance;
@property (nonatomic, readonly) double timestampUTCEnd;
@property (nonatomic, readonly) double timestampUTCStart;
@property (nonatomic, readonly) MAEdgeFilter *uniquelyIdentifyingFilter;
@property (nonatomic, readonly) NSDate *universalEndDate;
@property (nonatomic, readonly) NSDate *universalStartDate;

+ (id)filter;
+ (void)setRelevance:(double)arg1 onAddressEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;
+ (void)setUniversalEndDate:(id)arg1 onAddressEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;
+ (void)setUniversalStartDate:(id)arg1 onAddressEdgeForIdentifier:(unsigned long long)arg2 inGraph:(id)arg3;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)edgeDescription;
- (bool)hasProperties:(id)arg1;
- (id)initFromMomentNode:(id)arg1 toAddressNode:(id)arg2 relevance:(double)arg3 universalStartDate:(id)arg4 universalEndDate:(id)arg5 photoCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg6 numberOfAssets:(unsigned long long)arg7;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 properties:(id)arg5;
- (id)initWithLabel:(id)arg1 sourceNode:(id)arg2 targetNode:(id)arg3 domain:(unsigned short)arg4 weight:(float)arg5 properties:(id)arg6;
- (id)label;
- (unsigned long long)numberOfAssets;
- (struct CLLocationCoordinate2D { double x1; double x2; })photoCoordinate;
- (id)photoLocation;
- (id)propertyDictionary;
- (double)relevance;
- (double)timestampUTCEnd;
- (double)timestampUTCStart;
- (id)uniquelyIdentifyingFilter;
- (id)universalEndDate;
- (id)universalStartDate;

@end
