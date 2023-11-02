
@protocol INIntentDelivering <NSObject>

@required

- (struct { unsigned int x1[8]; })auditToken;
- (void)confirmIntent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 10: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSData *, NSSet *, NSError *, void*
- (<INIntentDeliveringDelegate> *)delegate;
- (void)getIntentParameterDefaultValue:(void *)arg1 forIntent:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 9: NSString *, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)getIntentParameterOptions:(void *)arg1 forIntent:(void *)arg2 searchTerm:(void *)arg3 completionBlock:(void *)arg4; // needs 4 arg types, found 10: NSString *, INIntent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)handleIntent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 10: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INIntentResponse *, NSData *, NSSet *, NSError *, void*
- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)resolveIntentParameter:(void *)arg1 forIntent:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 8: NSString *, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)resolveIntentParameters:(void *)arg1 forIntent:(void *)arg2 completionBlock:(void *)arg3; // needs 3 arg types, found 10: NSArray *, INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, INIntent *, NSDictionary *, void*
- (void)setDelegate:(id <INIntentDeliveringDelegate>)arg1;

@optional

- (void)startSendingUpdatesForIntent:(void *)arg1 toObserver:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: INIntent *, <INIntentResponseObserver> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)stopSendingUpdatesForIntent:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: INIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
