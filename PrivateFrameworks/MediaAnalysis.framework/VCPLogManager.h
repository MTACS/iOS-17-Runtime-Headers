
@interface VCPLogManager : NSObject {
    int  _logLevel;
}

@property (readonly) int logLevel;

+ (id)dateFormatter;
+ (id)dateFormatterDate;
+ (id)sharedLogManager;

- (id)init;
- (int)logLevel;

@end
