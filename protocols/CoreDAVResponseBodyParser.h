
@protocol CoreDAVResponseBodyParser <NSObject>

@required

- (NSError *)parserError;
- (bool)processData:(NSData *)arg1 forTask:(CoreDAVTask *)arg2;

@optional

+ (bool)canHandleContentType:(NSString *)arg1;

@end
