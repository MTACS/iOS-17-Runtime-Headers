
@interface _PXStoryTimeBasedChapterCollectionConfiguration : NSObject <PXStoryConfigurableTimeBasedChapterCollection> {
    NSMutableArray * _chapters;
    bool  _usesAssetLocalCreationDates;
}

@property (nonatomic, readonly) NSMutableArray *chapters;
@property (nonatomic) bool usesAssetLocalCreationDates;

- (void).cxx_destruct;
- (void)addChapterWithDateInterval:(id)arg1 configuration:(id /* block */)arg2;
- (id)chapters;
- (id)init;
- (void)setUsesAssetLocalCreationDates:(bool)arg1;
- (bool)usesAssetLocalCreationDates;

@end
