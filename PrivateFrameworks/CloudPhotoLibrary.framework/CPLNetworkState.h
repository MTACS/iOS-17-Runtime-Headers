
@interface CPLNetworkState : NSObject {
    bool  _cellularRestricted;
    bool  _inAirplaneMode;
    NSObject<OS_nw_path> * _networkPath;
}

@property (nonatomic, readonly) bool canUseNetwork;
@property (getter=isCellular, nonatomic, readonly) bool cellular;
@property (getter=isCellularRestricted, nonatomic, readonly) bool cellularRestricted;
@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (getter=isConstrained, nonatomic, readonly) bool constrained;
@property (getter=isInAirplaneMode, nonatomic, readonly) bool inAirplaneMode;
@property (nonatomic, readonly) NSObject<OS_nw_path> *networkPath;
@property (nonatomic, readonly) NSDictionary *plistDescription;

- (void).cxx_destruct;
- (bool)canUseNetwork;
- (id)description;
- (id)initWithNetworkPath:(id)arg1 cellularRestricted:(bool)arg2 inAirplaneMode:(bool)arg3;
- (bool)isCellular;
- (bool)isCellularRestricted;
- (bool)isConnected;
- (bool)isConstrained;
- (bool)isEqual:(id)arg1;
- (bool)isFunctionallyEqual:(id)arg1;
- (bool)isInAirplaneMode;
- (id)networkPath;
- (id)plistDescription;
- (id)redactedDescription;

@end
