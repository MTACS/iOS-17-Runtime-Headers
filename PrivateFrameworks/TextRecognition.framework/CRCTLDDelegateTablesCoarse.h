
@interface CRCTLDDelegateTablesCoarse : NSObject <CRCTLDDelegate> {
    NSArray * _tableGroups;
    NSArray * _textRegions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)delegateWithTableGroups:(id)arg1 textRegions:(id)arg2;

- (void).cxx_destruct;
- (id)groupWithQuad:(id)arg1 layoutDirection:(unsigned long long)arg2 subregions:(id)arg3;
- (long long)groupingConstraintForRegion1:(id)arg1 region2:(id)arg2;
- (id)initWithTableGroups:(id)arg1 textRegions:(id)arg2;
- (id)tableForRegion:(id)arg1 outCell:(id*)arg2;

@end
