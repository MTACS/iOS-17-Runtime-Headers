
@protocol HKQueryServerInterface <NSObject>

@required

- (void)remote_deactivateServer;
- (void)remote_startQueryWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
