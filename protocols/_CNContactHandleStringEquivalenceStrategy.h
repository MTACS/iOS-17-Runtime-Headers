
@protocol _CNContactHandleStringEquivalenceStrategy <NSObject>

@required

+ (NSString *)indexKeyForString:(NSString *)arg1;

- (bool)isEquivalentToString:(NSString *)arg1 strict:(bool*)arg2;

@end
