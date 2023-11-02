
@interface ATXHeuristicContactPhoneNumber : NSObject <ATXContextHeuristicProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)_containsPhonePunctuation:(id)arg1;
- (id)heuristicResultWithEnvironment:(id)arg1;
- (id)permanentRefreshTriggers;
- (id)phonesFromDataDetectorResults:(id)arg1;

@end
