
@protocol SVXServiceCommandHandling <NSObject>

@required

+ (Class)supportedCommandClass;

- (void)handleCommand:(void *)arg1 withContext:(void *)arg2 taskTracker:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: AceObject<SAAceCommand> *, <NSCopying> *, <SVXTaskTracking> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVXServiceCommandResult *, void*
- (NSString *)identifier;
- (bool)isCommandUUFR:(AceObject<SAAceCommand> *)arg1;

@optional

- (void)prepareToHandleCommand:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AceObject<SAAceCommand> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, <NSCopying> *, void*
- (bool)shouldDependOnCommand:(AceObject<SAAceCommand> *)arg1;

@end
