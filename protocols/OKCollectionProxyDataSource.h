
@protocol OKCollectionProxyDataSource <NSObject>

@required

- (NSArray *)allKeysForDictionaryProxy:(OKCollectionProxy *)arg1;
- (unsigned long long)countOfDictionaryProxy:(OKCollectionProxy *)arg1;
- (id)dictionaryProxy:(OKCollectionProxy *)arg1 objectForKey:(id)arg2;

@optional

- (id)dictionaryProxy:(OKCollectionProxy *)arg1 objectAtIndexPath:(NSIndexPath *)arg2;

@end
