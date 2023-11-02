
@interface WFSiriWorkflowRunnerClientOptions : NSObject <NSSecureCoding> {
    NSArray * _airPlayRouteIDs;
    long long  _currentDeviceIdiom;
    bool  _disableSiriBehavior;
    long long  _executionContext;
    bool  _isOwnedByCurrentUser;
    NSString * _originatingDeviceIDSIdentifier;
    NSString * _originatingDeviceRapportEffectiveIdentifier;
    NSString * _originatingDeviceRapportMediaSystemIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *airPlayRouteIDs;
@property (nonatomic) long long currentDeviceIdiom;
@property (nonatomic, readonly) bool disableSiriBehavior;
@property (nonatomic, readonly) long long executionContext;
@property (nonatomic, readonly) bool isOwnedByCurrentUser;
@property (nonatomic, readonly, copy) NSString *originatingDeviceIDSIdentifier;
@property (nonatomic, readonly, copy) NSString *originatingDeviceRapportEffectiveIdentifier;
@property (nonatomic, readonly, copy) NSString *originatingDeviceRapportMediaSystemIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)airPlayRouteIDs;
- (long long)currentDeviceIdiom;
- (bool)disableSiriBehavior;
- (void)encodeWithCoder:(id)arg1;
- (long long)executionContext;
- (id)initWithAirPlayRouteIDs:(id)arg1 executionContext:(long long)arg2 originatingDeviceIDSIdentifier:(id)arg3 originatingDeviceRapportEffectiveIdentifier:(id)arg4 originatingDeviceRapportMediaSystemIdentifier:(id)arg5 isOwnedByCurrentUser:(bool)arg6;
- (id)initWithAirPlayRouteIDs:(id)arg1 executionContext:(long long)arg2 originatingDeviceIDSIdentifier:(id)arg3 originatingDeviceRapportEffectiveIdentifier:(id)arg4 originatingDeviceRapportMediaSystemIdentifier:(id)arg5 isOwnedByCurrentUser:(bool)arg6 disableSiriBehavior:(bool)arg7;
- (id)initWithCoder:(id)arg1;
- (bool)isOwnedByCurrentUser;
- (id)originatingDeviceIDSIdentifier;
- (id)originatingDeviceRapportEffectiveIdentifier;
- (id)originatingDeviceRapportMediaSystemIdentifier;
- (void)setCurrentDeviceIdiom:(long long)arg1;

@end
