
@interface UAPasteboardGeneration : NSObject {
    NSSet * _allTypes;
    unsigned long long  _generation;
    NSArray * _items;
    NSMutableDictionary * _typePaths;
}

@property (copy) NSSet *allTypes;
@property (readonly) unsigned long long generation;
@property (copy) NSArray *items;
@property (retain) NSMutableDictionary *typePaths;

- (void).cxx_destruct;
- (bool)addItem:(id)arg1;
- (bool)addType:(id)arg1 toItemAtIndex:(unsigned long long)arg2;
- (id)allTypes;
- (void)fetchTypeURL:(id)arg1;
- (unsigned long long)generation;
- (id)getTypePaths;
- (id)initWithGeneration:(unsigned long long)arg1;
- (id)items;
- (void)setAllTypes:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTypePaths:(id)arg1;
- (id)typePaths;

@end
