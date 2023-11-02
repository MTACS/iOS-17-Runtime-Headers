
@interface PISmartToneAutoCalculator : NUAutoCalculator <NUTimeBased>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } time;

- (void)submit:(id /* block */)arg1;
- (id)submitSynchronous:(out id*)arg1;

@end
