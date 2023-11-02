
@interface NLParsecDataManager : NSObject {
    NSMutableArray * m_entries;
}

@property (nonatomic, readonly) NSData *serializableData;

+ (void)enumerateEntriesForSerializedData:(id)arg1 withBlock:(id /* block */)arg2;
+ (unsigned short)maxNumberOfPOIsAllowed;
+ (void)notifyStoredSerializedDataChanged;
+ (bool)supportsDomain:(id)arg1;

- (void)addEntry:(id)arg1 domain:(id)arg2 metaData:(id)arg3;
- (void)dealloc;
- (id)getEntries;
- (void)insertEntry:(id)arg1;
- (id)serializableData;

@end
