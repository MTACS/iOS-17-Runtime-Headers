
@protocol IDSBatchIDQueryControllerDelegate <NSObject>

@required

- (void)batchQueryController:(IDSBatchIDQueryController *)arg1 updatedDestinationsStatus:(NSDictionary *)arg2 onService:(NSString *)arg3 error:(NSError *)arg4;

@optional

- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1;
- (void)idStatusUpdatedForDestinations:(NSDictionary *)arg1 service:(NSString *)arg2;

@end
