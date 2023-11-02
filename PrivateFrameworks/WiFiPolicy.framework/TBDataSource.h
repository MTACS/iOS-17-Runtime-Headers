
@interface TBDataSource : NSObject <TBFetchProvider> {
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void)executeFetchRequest:(id)arg1;
- (void)submitAnalyticsEventForFetchRequest:(id)arg1 duration:(double)arg2 error:(id)arg3 resultCount:(long long)arg4;
- (unsigned long long)type;

@end
