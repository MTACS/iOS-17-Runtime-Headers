
@protocol TPSSecureCoding <NSSecureCoding>

@required

+ (NSSet *)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(NSData *)arg1 error:(id*)arg2;

- (NSData *)archivedDataWithError:(id*)arg1;

@end
