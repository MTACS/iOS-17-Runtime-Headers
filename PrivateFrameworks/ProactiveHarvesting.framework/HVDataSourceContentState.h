
@interface HVDataSourceContentState : NSObject {
    unsigned int  _dataSource;
    NSMutableDictionary * _deferredContentStates;
    NSData * _fileContentsHash;
    NSString * _path;
}

@property (nonatomic, readonly) unsigned int dataSource;
@property (nonatomic, readonly) NSMutableDictionary *deferredContentStates;

+ (bool)deleteStateForDataSource:(unsigned int)arg1 basePath:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (unsigned int)dataSource;
- (id)deferredContentStates;
- (unsigned long long)hash;
- (id)initWithDataSource:(unsigned int)arg1 basePath:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)saveStateWithError:(id*)arg1;

@end
