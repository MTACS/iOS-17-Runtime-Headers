
@interface KVDictionaryLog : NSObject {
    NSMutableDictionary * _log;
    NSURL * _logFileURL;
    int  _protectionClass;
}

- (void).cxx_destruct;
- (bool)clear;
- (id)description;
- (id)init;
- (id)initWithFilename:(id)arg1 directory:(id)arg2;
- (id)initWithFilename:(id)arg1 directory:(id)arg2 protectionClass:(int)arg3;
- (id)mutableDictionaryForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (bool)writeUpdatedObject:(id)arg1 forKey:(id)arg2;
- (bool)writeUpdatedObjects:(id)arg1 forKeys:(id)arg2;

@end
