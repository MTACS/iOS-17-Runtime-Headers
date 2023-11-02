
@protocol PHFetchDictionaryAccessing <NSObject>

@required

- (id)objectForKey:(id <NSCopying>)arg1;
- (id)objectForKeyedSubscript:(id <NSCopying>)arg1;

@optional

- (<PHMutableFetchDictionaryAccessing> *)mutableAccessingCopy;

@end
