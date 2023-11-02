
@protocol ANDataMessage <NSObject>

@required

+ (NSData *)messageDataFromMessage:(NSDictionary *)arg1;
+ (NSDictionary *)messageFromData:(NSDictionary *)arg1 data:(NSData *)arg2;
+ (NSDictionary *)messageWithoutDataFromMessage:(NSDictionary *)arg1;

@end
