
@protocol VUIJSVideosNativeInterface <JSExport>

@required

- (NSNumber *)generateHash:(NSArray *)arg1;
- (NSString *)locStringForKey:(NSString *)arg1;
- (NSString *)locStringForKeyWithCounts:(NSString *)arg1 :(NSArray *)arg2;
- (void)setLocDictionary:(NSDictionary *)arg1;

@end
