
@interface MTSKeychainStore : NSObject {
    <MTSKeychainStoreDataSource> * _dataSource;
    NSString * _scope;
}

@property (readonly, copy) NSDictionary *allDataByKey;
@property (readonly) <MTSKeychainStoreDataSource> *dataSource;
@property (readonly, copy) NSString *scope;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)allDataByKey;
- (id)attributeDictionaryForAddingData:(id)arg1 forKey:(id)arg2;
- (id)attributeDictionaryForUpdatingData:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dataSource;
- (id)initWithScope:(id)arg1;
- (id)initWithScope:(id)arg1 dataSource:(id)arg2;
- (id)queryDictionaryForKey:(id)arg1 isExpectingReturnData:(bool)arg2;
- (bool)removeAllDataWithError:(id*)arg1;
- (bool)removeDataForKey:(id)arg1 error:(id*)arg2;
- (id)scope;
- (bool)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;

@end
