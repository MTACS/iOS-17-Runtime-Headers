
@protocol DOCTagRegistryProtocol <NSObject>

@required

- (bool)addTag:(DOCTag *)arg1;
- (void)addTag:(DOCTag *)arg1 options:(long long)arg2;
- (void)addTags:(NSArray *)arg1 options:(long long)arg2;
- (bool)canReplaceTag:(DOCTag *)arg1 withTag:(DOCTag *)arg2;
- (NSOrderedSet *)discoveredTags;
- (bool)insertTag:(DOCTag *)arg1 atIndex:(unsigned long long)arg2;
- (bool)isValidNewTagName:(NSString *)arg1;
- (bool)moveTag:(DOCTag *)arg1 toIndex:(unsigned long long)arg2;
- (void)performBatchUpdate:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <DOCTagRegistryProtocol> *, void*
- (void)removeAllTagsOfType:(long long)arg1;
- (void)removeTags:(NSArray *)arg1;
- (bool)replaceTag:(DOCTag *)arg1 withTag:(DOCTag *)arg2;
- (void)setTagSerialNumber:(long long)arg1;
- (DOCTag *)tagForName:(NSString *)arg1;
- (long long)tagSerialNumber;
- (NSOrderedSet *)userTags;

@end
