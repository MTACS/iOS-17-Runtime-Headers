
@protocol WBChange <NSObject, NSSecureCoding, WBSerializable>

@required

- (long long)changeType;
- (bool)shouldSync;
- (void)updateChangeAfterUpdatingInMemoryID:(int)arg1 withDatabaseID:(int)arg2;

@end
