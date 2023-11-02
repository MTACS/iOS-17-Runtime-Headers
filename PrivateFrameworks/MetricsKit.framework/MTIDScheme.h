
@interface MTIDScheme : NSObject <NSSecureCoding> {
    NSString * _containerIdentifier;
    unsigned long long  _correlationHash;
    NSArray * _correlations;
    NSString * _idNamespace;
    long long  _idType;
    bool  _isDefault;
    long long  _lifespan;
    unsigned long long  _localHash;
    long long  _rotationSchedule;
    NSArray * _topics;
    NSString * _version;
}

@property (nonatomic, copy) NSString *containerIdentifier;
@property (nonatomic) unsigned long long correlationHash;
@property (nonatomic, copy) NSArray *correlations;
@property (nonatomic, copy) NSString *idNamespace;
@property (nonatomic) long long idType;
@property (nonatomic) bool isDefault;
@property (nonatomic) long long lifespan;
@property (nonatomic) unsigned long long localHash;
@property (nonatomic, readonly) double maxFutureTimeInterval;
@property (nonatomic, readonly) double maxPastTimeInterval;
@property (nonatomic) long long rotationSchedule;
@property (nonatomic, readonly) unsigned long long storagePoolSize;
@property (nonatomic, copy) NSArray *topics;
@property (nonatomic, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)calculateHash;
- (id)containerIdentifier;
- (unsigned long long)correlationHash;
- (id)correlations;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idNamespace;
- (long long)idType;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamespace:(id)arg1 options:(id)arg2;
- (id)initWithNamespace:(id)arg1 type:(long long)arg2;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (long long)lifespan;
- (unsigned long long)localHash;
- (double)maxFutureTimeInterval;
- (double)maxPastTimeInterval;
- (void)overrideLifespanMaybe;
- (long long)rotationSchedule;
- (void)setContainerIdentifier:(id)arg1;
- (void)setCorrelationHash:(unsigned long long)arg1;
- (void)setCorrelations:(id)arg1;
- (void)setIdNamespace:(id)arg1;
- (void)setIdType:(long long)arg1;
- (void)setIsDefault:(bool)arg1;
- (void)setLifespan:(long long)arg1;
- (void)setLocalHash:(unsigned long long)arg1;
- (void)setRotationSchedule:(long long)arg1;
- (void)setTopics:(id)arg1;
- (void)setVersion:(id)arg1;
- (unsigned long long)storagePoolSize;
- (id)topics;
- (id)version;

@end
