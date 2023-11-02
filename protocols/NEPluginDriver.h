
@protocol NEPluginDriver

@required

- (void)sleepWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startWithConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NEConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSArray *, void*
- (void)updateConfiguration:(NEConfiguration *)arg1;
- (void)wakeup;

@end
