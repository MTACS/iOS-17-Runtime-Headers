
@interface IMChatTranscriptLayoutEngine : NSObject {
    NSMutableArray * _cachedDrawables;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <IMChatTranscriptLayoutEngineDataSource> * _dataSource;
    NSArray * _layoutAttributes;
    IMChatTranscriptLayoutSpecification * _layoutSpecification;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) <IMChatTranscriptLayoutEngineDataSource> *dataSource;
@property (nonatomic, copy) NSArray *layoutAttributes;
@property (nonatomic, retain) IMChatTranscriptLayoutSpecification *layoutSpecification;

- (void).cxx_destruct;
- (void)_buildLayoutAttributesIfNeeded;
- (id)_cachedDrawableAtIndexOrNil:(unsigned long long)arg1;
- (id)_cachedDrawableForTranscriptItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_invalidateCachedItemData;
- (id)_makeDrawableForTranscriptItem:(id)arg1;
- (unsigned long long)_numberOfTranscriptItems;
- (double)_spaceForVerticalSpaceDescriptor:(long long)arg1;
- (void)_updateContentSize;
- (void)_updateFrames;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)dataSource;
- (id)drawableAtIndex:(unsigned long long)arg1;
- (id)init;
- (void)invalidateLayout;
- (id)layoutAttributes;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutSpecification;
- (void)prepareLayout;
- (void)reloadData;
- (void)removeItemsAtIndexPaths:(id)arg1 insertItemsAtIndexPaths:(id)arg2;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDataSource:(id)arg1;
- (void)setLayoutAttributes:(id)arg1;
- (void)setLayoutSpecification:(id)arg1;

@end
