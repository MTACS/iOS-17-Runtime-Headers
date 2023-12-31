
@interface WLKDictionaryResponseProcessor : NSObject {
    NSString * _dictionaryKeyPath;
    Class  _objectClass;
}

@property (nonatomic, copy) NSString *dictionaryKeyPath;
@property (nonatomic, retain) Class objectClass;

- (void).cxx_destruct;
- (id)dictionaryKeyPath;
- (Class)objectClass;
- (id)processResponseData:(id)arg1 error:(id*)arg2;
- (id)processResponseData:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (void)setDictionaryKeyPath:(id)arg1;
- (void)setObjectClass:(Class)arg1;

@end
