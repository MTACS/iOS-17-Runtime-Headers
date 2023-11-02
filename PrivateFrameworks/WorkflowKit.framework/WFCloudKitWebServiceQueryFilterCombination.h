
@interface WFCloudKitWebServiceQueryFilterCombination : WFCloudKitWebServiceQueryFilter {
    NSArray * _filters;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSArray *filters;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)filters;
- (void)setFilters:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)stringRepresentationWithRecordType:(id)arg1;
- (unsigned long long)type;

@end
