
@interface _MPCPlayerResponseTracklistDisplayDataSource : NSObject <MPLazySectionedCollectionDataSource> {
    MPSectionedCollection * _items;
    NSIndexPath * _playingItemIndexPath;
    NSDictionary * _sectionRanges;
    NSArray * _sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPSectionedCollection *items;
@property (nonatomic, readonly, copy) NSIndexPath *playingItemIndexPath;
@property (nonatomic, readonly) NSDictionary *sectionRanges;
@property (nonatomic, readonly) NSArray *sections;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)displayIndexPathForStructuredIndexPath:(id)arg1;
- (id)initWithTracklistItems:(id)arg1 playingItemIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (id)items;
- (unsigned long long)numberOfItemsInSection:(unsigned long long)arg1;
- (unsigned long long)numberOfSections;
- (id)playingItemIndexPath;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sectionRanges;
- (id)sections;
- (id)structuredIndexPathForDisplayIndexPath:(id)arg1;

@end
