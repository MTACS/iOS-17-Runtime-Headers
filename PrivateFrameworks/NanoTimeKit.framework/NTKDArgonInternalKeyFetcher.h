
@interface NTKDArgonInternalKeyFetcher : NSObject <NTKArgonFetcherProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fetchNewRecordsSinceChangeToken:(id)arg1 forReason:(long long)arg2 completion:(id /* block */)arg3;

@end
