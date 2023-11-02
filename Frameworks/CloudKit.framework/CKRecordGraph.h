
@interface CKRecordGraph : NSObject {
    NSMutableArray * _nodes;
    NSArray * _sortedRecords;
}

+ (id)topologicallySortRecords:(id)arg1 withError:(id*)arg2;

- (void).cxx_destruct;
- (bool)addRecords:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)init;
- (id)recordsByTopologicalSortWithError:(id*)arg1;

@end
