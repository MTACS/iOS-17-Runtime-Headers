
@protocol HMESubscriptionProviding <NSObject>

@required

- (void)changeRegistrationsForConsumer:(void *)arg1 topicFilterAdditions:(void *)arg2 topicFilterRemovals:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: <HMEEventConsumer> *, NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)registerConsumer:(void *)arg1 topicFilters:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <HMEEventConsumer> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)unregisterConsumer:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: <HMEEventConsumer> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)unregisterConsumer:(void *)arg1 topicFilters:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <HMEEventConsumer> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@optional

- (<HMESynchronousSubscriptionProviding> *)synchronousSubscriptionProvider;

@end
