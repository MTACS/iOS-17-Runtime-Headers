
@interface _MKSortedDepartureCollection : NSObject {
    NSMutableSet * _groupedSequences;
    NSMutableArray * _sortedDepartures;
}

@property (nonatomic, retain) NSMutableSet *groupedSequences;
@property (nonatomic, retain) NSMutableArray *sortedDepartures;

- (void).cxx_destruct;
- (id)groupedSequences;
- (void)setGroupedSequences:(id)arg1;
- (void)setSortedDepartures:(id)arg1;
- (id)sortedDepartures;

@end
