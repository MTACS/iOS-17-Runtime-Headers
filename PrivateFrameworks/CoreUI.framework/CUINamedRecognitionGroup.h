
@interface CUINamedRecognitionGroup : CUINamedLookup {
    NSMutableDictionary * _imageContents;
    NSMutableDictionary * _objectContents;
}

- (void)dealloc;
- (id)initWithName:(id)arg1 contentsFromCatalog:(id)arg2 usingRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;
- (id)namedRecognitionImageImageList;
- (id)namedRecognitionItemList;
- (id)namedRecognitionObjectObjectList;
- (id)recognitionImageWithName:(id)arg1;
- (id)recognitionItemsWithName:(id)arg1;
- (id)recognitionObjectWithName:(id)arg1;

@end
