
@interface AEConcreteFeatureFlags : NSObject <AEFeatureFlags>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isiOSAgentEnabled, nonatomic, readonly) bool iOSAgentEnabled;
@property (readonly) Class superclass;

- (bool)isiOSAgentEnabled;

@end
