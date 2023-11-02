
@interface MusicKit_SoftLinking_MPModelSortDescriptor : NSObject {
    NSSortDescriptor * _sortDescriptor;
}

@property (nonatomic, copy) NSSortDescriptor *sortDescriptor;

+ (id)recentlyAddedModelObjectSortDescriptor;
+ (id)recentlyDownloadedModelObjectSortDescriptor;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 isAscending:(bool)arg2;
- (id)initWithKeyPath:(id)arg1 isAscending:(bool)arg2;
- (void)setSortDescriptor:(id)arg1;
- (id)sortDescriptor;

@end
