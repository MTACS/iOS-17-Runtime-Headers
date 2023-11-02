
@interface CHFeatureFlags : NSObject <CHFeatureFlags>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool increaseCallHistoryEnabled;
@property (readonly) Class superclass;

- (bool)increaseCallHistoryEnabled;

@end
