
@interface CLSClue : NSObject {
    double  _confidence;
    NSDictionary * _extraParameters;
    CLSInformant * _informant;
    NSString * _informantIdentifier;
    NSString * _key;
    CLSProfile * _profile;
    NSString * _profileIdentifier;
    double  _relevance;
    bool  _transient;
    id  _value;
    unsigned long long  _versionCount;
}

@property double confidence;
@property (retain) NSDictionary *extraParameters;
@property (retain) CLSInformant *informant;
@property (retain) NSString *informantIdentifier;
@property (copy) NSString *key;
@property (retain) CLSProfile *profile;
@property (retain) NSString *profileIdentifier;
@property double relevance;
@property bool transient;
@property (retain) id value;
@property unsigned long long versionCount;

+ (id)_clueWithValue:(id)arg1 forKey:(id)arg2;
+ (id)_clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;

- (void).cxx_destruct;
- (void)_incrementVersionCount;
- (long long)compare:(id)arg1;
- (long long)compareScore:(id)arg1;
- (double)confidence;
- (id)description;
- (double)doubleValue;
- (unsigned long long)enumValue;
- (id)extraParameters;
- (unsigned long long)hash;
- (id)informant;
- (id)informantIdentifier;
- (id)init;
- (long long)integerValue;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToClue:(id)arg1;
- (id)key;
- (id)profile;
- (id)profileIdentifier;
- (double)relevance;
- (double)score;
- (void)setConfidence:(double)arg1;
- (void)setExtraParameters:(id)arg1;
- (void)setInformant:(id)arg1;
- (void)setInformantIdentifier:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setRelevance:(double)arg1;
- (void)setTransient:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setVersionCount:(unsigned long long)arg1;
- (id)stringValue;
- (bool)transient;
- (id)value;
- (unsigned long long)valueHash;
- (unsigned long long)versionCount;

@end
