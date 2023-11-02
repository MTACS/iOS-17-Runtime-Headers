
@interface DDSTrialManagerDataSource : NSObject <DDSTrialManagerDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) bool isEnabled;
@property (readonly) Class superclass;

- (id)createTrialClientWithWorkQueue:(id)arg1 query:(id)arg2;
- (bool)isEnabled;

@end
