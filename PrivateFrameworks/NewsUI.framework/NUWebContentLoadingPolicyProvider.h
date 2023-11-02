
@interface NUWebContentLoadingPolicyProvider : NSObject <SWLoadingPolicyProvider> {
    <FCHeadlineProviding> * _headline;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <FCHeadlineProviding> *headline;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)headline;
- (id)initWithHeadline:(id)arg1;
- (unsigned long long)loadingPolicy;

@end
