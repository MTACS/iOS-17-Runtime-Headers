
@protocol CDPDCircleDelegate

@required

- (void)circleController:(void *)arg1 secureBackupRecordsArePresentWithCompletion:(void *)arg2; // needs 2 arg types, found 9: <CDPDCircleControl> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, bool, NSError *, void*
- (CDPContext *)contextForController:(id <CDPDCircleControl>)arg1;
- (CDPDSecureChannelContext *)secureChannelContextForController:(id <CDPDCircleControl>)arg1;

@end
