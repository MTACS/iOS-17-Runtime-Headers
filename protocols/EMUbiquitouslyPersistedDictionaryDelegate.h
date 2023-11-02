
@protocol EMUbiquitouslyPersistedDictionaryDelegate <NSObject>

@required

- (void)persistedDictionaryDidChangeRemotelyWithChangedItems:(NSDictionary *)arg1 deletedItems:(NSArray *)arg2;

@end
