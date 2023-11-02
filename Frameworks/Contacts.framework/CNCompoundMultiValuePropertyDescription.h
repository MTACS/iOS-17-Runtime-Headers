
@interface CNCompoundMultiValuePropertyDescription : CNMultiValuePropertyDescription

@property (nonatomic, readonly) id /* block */ dictionaryTransform;
@property (nonatomic, readonly) id /* block */ fromDictionaryTransform;
@property (nonatomic, readonly) NSArray *summarizationKeys;

- (id /* block */)dictionaryTransform;
- (id /* block */)fromDictionaryTransform;
- (id /* block */)fromPlistTransform;
- (id /* block */)plistTransform;
- (id)stringForIndexingForContact:(id)arg1;
- (id)summarizationKeys;

@end
