
@interface PGIncompleteLocationResolver : NSObject {
    NSSet * _addressNodes;
    PGGraphLocationHelper * _locationHelper;
    NSMutableDictionary * _resolvedLocationNodesCache;
}

@property (nonatomic, retain) NSSet *addressNodes;
@property (nonatomic, retain) NSMutableDictionary *resolvedLocationNodesCache;

+ (double)_maxDistanceForDimension:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_resolveIdentifierForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2;
- (id)_resolvedAddressForIncompleteAddress:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long*)arg3 resolvedLocation:(id*)arg4 addresses:(id)arg5;
- (id)_resolvedAddressForIncompleteAddress:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long*)arg3 resolvedLocation:(id*)arg4 sortedAddresses:(id)arg5;
- (id)_resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long*)arg3 continueResolvingHigherDimensions:(bool)arg4;
- (id)addressNodes;
- (id)initWithAddressNodes:(id)arg1 locationHelper:(id)arg2;
- (id)resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withPreferredTargetDimension:(unsigned long long)arg2 resolvedDimension:(unsigned long long*)arg3;
- (id)resolvedLocationNodeForIncompleteAddressNode:(id)arg1 withTargetDimension:(unsigned long long)arg2;
- (id)resolvedLocationNodesCache;
- (void)setAddressNodes:(id)arg1;
- (void)setResolvedLocationNodesCache:(id)arg1;

@end
