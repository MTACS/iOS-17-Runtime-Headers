
@protocol BRCOperationSubclass <NSObject>

@required

- (void)main;

@optional

- (bool)shouldRetryForError:(NSError *)arg1;

@end
