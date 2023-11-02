
@protocol _DKKnowledgeSynchronizing

@required

- (bool)deleteRemoteState:(id*)arg1;
- (NSUUID *)deviceUUID;
- (NSString *)sourceDeviceIdentityFromObject:(_DKObject *)arg1 error:(id*)arg2;
- (NSString *)sourceDeviceIdentityWithError:(id*)arg1;
- (bool)synchronizeWithError:(id*)arg1;
- (bool)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 error:(id*)arg3;
- (void)synchronizeWithUrgency:(void *)arg1 client:(void *)arg2 responseQueue:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 9: unsigned long long, NSString *, NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
