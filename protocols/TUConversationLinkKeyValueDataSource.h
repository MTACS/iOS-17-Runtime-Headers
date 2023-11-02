
@protocol TUConversationLinkKeyValueDataSource <NSObject>

@required

- (void)integerForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (long long)integerForKey:(NSString *)arg1 error:(id*)arg2;
- (void)setInteger:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)setInteger:(long long)arg1 forKey:(NSString *)arg2 error:(id*)arg3;
- (void)setString:(void *)arg1 forKey:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)setString:(NSString *)arg1 forKey:(NSString *)arg2 error:(id*)arg3;
- (void)stringForKey:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (NSString *)stringForKey:(NSString *)arg1 error:(id*)arg2;

@end
