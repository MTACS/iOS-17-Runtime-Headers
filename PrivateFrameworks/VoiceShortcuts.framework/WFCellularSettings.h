
@interface WFCellularSettings : NSObject {
    struct __CTServerConnection { } * _connection;
}

@property (nonatomic, readonly) struct __CTServerConnection { }*connection;

+ (id)defaultSettings;

- (bool)cellularDataEnabledWithError:(id*)arg1;
- (struct __CTServerConnection { }*)connection;
- (void)dealloc;
- (id)init;

@end
