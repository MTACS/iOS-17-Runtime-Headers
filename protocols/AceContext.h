
@protocol AceContext <NSObject>

@required

- (AceObject *)aceObjectWithDictionary:(NSDictionary *)arg1;
- (Class)classWithClassName:(NSString *)arg1 group:(NSString *)arg2;

@end
