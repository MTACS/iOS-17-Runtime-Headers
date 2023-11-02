
@protocol SKAStatusPublishingManaging <NSObject>

@required

- (void)publishPendingRequestForReason:(long long)arg1;
- (void)publishStatusRequest:(void *)arg1 statusTypeIdentifier:(void *)arg2 afterTime:(void *)arg3 isPendingPublish:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: SKStatusPublishRequest *, NSString *, double, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)removePendingPublishRequestsForStatusTypeIdentifier:(NSString *)arg1 olderThanRequest:(SKStatusPublishRequest *)arg2;

@end
