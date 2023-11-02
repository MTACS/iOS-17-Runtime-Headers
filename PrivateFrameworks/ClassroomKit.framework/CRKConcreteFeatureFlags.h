
@interface CRKConcreteFeatureFlags : NSObject <CRKFeatureFlags>

@property (getter=isASMUserCachingEnabled, nonatomic, readonly) bool ASMUserCachingEnabled;
@property (getter=isDataSeparationEnabled, nonatomic, readonly) bool dataSeparationEnabled;

- (bool)isASMUserCachingEnabled;
- (bool)isDataSeparationEnabled;

@end
