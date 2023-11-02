
@interface ACDKeychainItemCache : NSObject {
    NSMutableDictionary * _nonSyncableItems;
    NSMutableDictionary * _syncableItems;
}

@property (readonly) NSMutableDictionary *nonSyncableItems;
@property (readonly) NSMutableDictionary *syncableItems;

- (void).cxx_destruct;
- (id)nonSyncableItems;
- (id)syncableItems;

@end
