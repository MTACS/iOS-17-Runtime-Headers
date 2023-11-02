
@interface BBThreadsMuteAssertion : BBMuteAssertion {
    NSMutableDictionary * _mutableExpirationDateByThreadID;
}

@property (nonatomic, readonly, copy) NSDictionary *expirationDateByThreadID;
@property (nonatomic, readonly, copy) NSSet *threadIDs;

+ (bool)supportsSecureCoding;
+ (id)threadsMuteAssertion;

- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDateByThreadID;
- (void)getNextExpirationDate:(id*)arg1 wasPurged:(bool*)arg2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isActiveForThreadIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setMutedUntilDate:(id)arg1 forThreadIdentifier:(id)arg2;
- (void)setUnmutedForThreadIdentifier:(id)arg1;
- (id)threadIDs;

@end
