
@protocol CoreDAVLogDelegate <NSObject>

@required

- (void)coreDAVLogTransmittedDataPartial:(NSData *)arg1;
- (void)coreDAVTransmittedDataFinished;
- (bool)shouldLogTransmittedData;

@optional

- (void)coreDAVLogDiagnosticMessage:(NSString *)arg1 atLevel:(long long)arg2;
- (long long)coreDAVLogLevel;
- (void)coreDAVLogRequestBody:(NSData *)arg1;
- (void)coreDAVLogResponseBody:(NSData *)arg1;
- (long long)coreDAVOutputLevel;
- (NSObject<OS_os_log> *)logHandle;

@end
