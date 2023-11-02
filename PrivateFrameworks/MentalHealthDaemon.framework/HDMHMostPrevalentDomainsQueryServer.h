
@interface HDMHMostPrevalentDomainsQueryServer : HDQueryServer {
    HKMHCountBasedQueryConfiguration * _configuration;
}

+ (Class)queryClass;
+ (id)requiredEntitlements;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (void)_queue_start;
- (bool)_queue_surfaceMostPrevalentDomainsWithError:(id*)arg1;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)objectTypes;

@end
