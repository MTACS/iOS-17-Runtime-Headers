
@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding> {
    NSString * _identifier;
    NSDictionary * _parameters;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDictionary *parameters;

+ (id)_predicateForChangeAtKeyPath:(id)arg1 identifier:(id)arg2;
+ (id)_predicateForKeyPath:(id)arg1 equalToValue:(id)arg2 identifier:(id)arg3;
+ (id)_predicateForKeyPath:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3;
+ (id)andPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2;
+ (id)contextualPredicateForKeyPaths:(id)arg1 withPredicate:(id)arg2 identifier:(id)arg3;
+ (id)notPredicateWithSubpredicate:(id)arg1 identifier:(id)arg2;
+ (id)orPredicateWithSubpredicates:(id)arg1 identifier:(id)arg2;
+ (id)predicateForBacklightOnStatus;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)arg1 states:(id)arg2;
+ (id)predicateForForegroundApp;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)predicateForIsConnectedToCar;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForNetworkQualityFair;
+ (id)predicateForNextAlarm;
+ (id)predicateForPhotosAppBecameForeground;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateWithIdentifier:(id)arg1;
+ (id)predicates;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parameters:(id)arg2;
- (id)initWithPlistDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parameters;
- (id)plistDictionary;
- (void)setIdentifier:(id)arg1;
- (void)setParameters:(id)arg1;

@end
