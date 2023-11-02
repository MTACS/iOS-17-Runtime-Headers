
@interface BMSimpleKeyValueStorage : NSObject <BMKeyValueStorage> {
    BMFileManager * _fileManager;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _url;
}

@property (nonatomic, readonly) BMFileManager *fileManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)_deleteValueForKey:(id)arg1;
- (id)_fetchValueForKey:(id)arg1;
- (void)_insertValue:(id)arg1 forKey:(id)arg2;
- (void)deleteValueForKey:(id)arg1;
- (id)fetchValueForKey:(id)arg1;
- (id)fileManager;
- (id)initWithURL:(id)arg1;
- (void)insertValue:(id)arg1 forKey:(id)arg2;
- (id)queue;
- (id)readDictionary;
- (void)storeDictionary:(id)arg1;
- (id)url;

@end
