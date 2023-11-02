
@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext {
    struct __CFDictionary { } * _headerWidthDict;
    NSMutableIndexSet * _invalidatedSections;
}

@property (nonatomic, readonly) NSIndexSet *invalidatedSections;

- (void).cxx_destruct;
- (void)dealloc;
- (id)invalidatedSections;
- (double)preferredWidthForHeaderInSection:(long long)arg1;

@end
