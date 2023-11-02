
@interface HFSnapshotInfo : NSObject {
    NSDiffableDataSourceSnapshot * _baseSnapshot;
    NSMutableDictionary * _sectionSnapshots;
}

@property (nonatomic, retain) NSDiffableDataSourceSnapshot *baseSnapshot;
@property (nonatomic, retain) NSMutableDictionary *sectionSnapshots;

- (void).cxx_destruct;
- (id)baseSnapshot;
- (id)initWithSnapshot:(id)arg1;
- (id)sectionSnapshots;
- (void)setBaseSnapshot:(id)arg1;
- (void)setSectionSnapshots:(id)arg1;

@end
