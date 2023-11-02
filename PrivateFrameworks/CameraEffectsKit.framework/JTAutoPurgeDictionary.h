
@interface JTAutoPurgeDictionary : NSObject {
    <JTAutoPurgeDictionaryDelegate> * _delegate;
    NSMutableDictionary * _dictionary;
    bool  _suspendPurging;
}

@property (readonly) unsigned long long count;
@property (nonatomic) <JTAutoPurgeDictionaryDelegate> *delegate;
@property bool suspendPurging;

- (void).cxx_destruct;
- (void)addEntriesFromDictionary:(id)arg1;
- (id)copyOfDictionary;
- (unsigned long long)count;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)highMemoryWarning;
- (id)init;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setSuspendPurging:(bool)arg1;
- (bool)suspendPurging;

@end
