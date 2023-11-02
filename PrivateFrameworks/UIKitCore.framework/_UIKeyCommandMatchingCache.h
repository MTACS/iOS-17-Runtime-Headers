
@interface _UIKeyCommandMatchingCache : NSObject {
    NSMutableDictionary * _commandKeyPlaneConflictsByInput;
    NSMutableDictionary * _reachabilityByInput;
}

@property (nonatomic, readonly) NSMutableDictionary *commandKeyPlaneConflictsByInput;
@property (nonatomic, readonly) NSMutableDictionary *reachabilityByInput;

- (void).cxx_destruct;
- (id)commandKeyPlaneConflictsByInput;
- (id)init;
- (id)reachabilityByInput;

@end
