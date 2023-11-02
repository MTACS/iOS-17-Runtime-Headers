
@interface WLKServerConfigurationResponse : NSObject <NSCopying, WLKCoding> {
    unsigned long long  _environmentHash;
    NSDate * _expirationDate;
    NSDictionary * _responseDictionary;
}

@property (getter=isActiveUser, nonatomic, readonly) bool activeUser;
@property (nonatomic, readonly) unsigned long long environmentHash;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (getter=isFavoritesSyncEnabled, nonatomic, readonly) bool favoritesSyncEnabled;
@property (nonatomic, readonly) NSDictionary *features;
@property (nonatomic, readonly) NSDictionary *requiredRequestKeyValuePairsDictionary;
@property (nonatomic, readonly) NSDictionary *responseDictionary;
@property (nonatomic, readonly, copy) NSString *utsk;
@property (nonatomic, readonly, copy) NSNumber *vppaSessionDurationInMillis;
@property (nonatomic, readonly) long long vppaStatus;
@property (nonatomic, readonly) NSString *vppaStatusString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_VPPAInfo;
- (id)_applicationProperties;
- (id)_expirationDateFromResponse:(id)arg1;
- (id)_requiredRequestKVPMap;
- (id)_requiredRequestKVPMap:(id)arg1;
- (id)_routes;
- (id)_userProperties;
- (id)_utskProperties;
- (id)configurationResponseByReplacingUTSK:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)environmentHash;
- (id)expirationDate;
- (id)features;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3;
- (bool)isActiveUser;
- (bool)isEqual:(id)arg1;
- (bool)isFavoritesSyncEnabled;
- (bool)isValid;
- (bool)isValidIgnoringExpiration;
- (bool)isValidWithinExtendedExpiration:(double)arg1;
- (id)requiredRequestKeyValuePairsDictionary;
- (id)requiredRequestKeyValuePairsDictionary:(id)arg1;
- (id)requiredRequestKeyValuePairsForType:(id)arg1;
- (id)responseDictionary;
- (id)serverRouteNamed:(id)arg1;
- (id)utsc;
- (id)utsk;
- (id)vppaSessionDurationInMillis;
- (long long)vppaStatus;
- (id)vppaStatusString;

@end
