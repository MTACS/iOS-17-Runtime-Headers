
@interface PGGraphMobilityNode : PGGraphPropertylessNode <MAUniquelyIdentifiableNode> {
    NSString * _label;
}

@property (nonatomic, readonly) unsigned long long mobilityType;
@property (nonatomic, readonly) MANodeFilter *uniquelyIdentifyingFilter;

+ (id)filter;
+ (unsigned long long)mobilityTypeForMobilityLabel:(id)arg1;

- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)arg1;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;
- (unsigned long long)mobilityType;
- (id)uniquelyIdentifyingFilter;

@end
