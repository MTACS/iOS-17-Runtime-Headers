
@protocol INControlHomeIntentHandling <NSObject>

@required

- (void)handleControlHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INControlHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INControlHomeIntentResponse *, void*

@optional

- (void)confirmControlHome:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INControlHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INControlHomeIntentResponse *, void*
- (void)resolveContentsForControlHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INControlHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveFiltersForControlHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INControlHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)resolveTimeForControlHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INControlHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INDateComponentsRangeResolutionResult *, void*
- (void)resolveUserTaskForControlHome:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: INControlHomeIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INHomeUserTaskResolutionResult *, void*

@end
