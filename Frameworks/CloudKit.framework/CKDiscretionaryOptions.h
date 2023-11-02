
@interface CKDiscretionaryOptions : NSObject <NSCoding, NSSecureCoding> {
    bool  _allowsCellularAccess;
    bool  _allowsExpensiveNetworkAccess;
    NSString * _applicationBundleIdentifierOverride;
    unsigned long long  _discretionaryNetworkBehavior;
    bool  _requiresNetworkAccess;
    NSString * _secondarySourceApplicationBundleId;
    double  _timeoutIntervalForResource;
}

@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic) bool allowsExpensiveNetworkAccess;
@property (nonatomic, retain) NSString *applicationBundleIdentifierOverride;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) bool requiresNetworkAccess;
@property (nonatomic, retain) NSString *secondarySourceApplicationBundleId;
@property (nonatomic) double timeoutIntervalForResource;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsCellularAccess;
- (bool)allowsExpensiveNetworkAccess;
- (id)applicationBundleIdentifierOverride;
- (unsigned long long)discretionaryNetworkBehavior;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)requiresNetworkAccess;
- (id)secondarySourceApplicationBundleId;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setAllowsExpensiveNetworkAccess:(bool)arg1;
- (void)setApplicationBundleIdentifierOverride:(id)arg1;
- (void)setDiscretionaryNetworkBehavior:(unsigned long long)arg1;
- (void)setRequiresNetworkAccess:(bool)arg1;
- (void)setSecondarySourceApplicationBundleId:(id)arg1;
- (void)setTimeoutIntervalForResource:(double)arg1;
- (double)timeoutIntervalForResource;

@end
