
@interface ARCollaborationStats : NSObject {
    unsigned long long  _anchorsCount;
    unsigned long long  _externalKeyframesCount;
    unsigned long long  _externalWeakKeyframesCount;
    unsigned long long  _localSessionIdentifier;
    unsigned long long  _mergedKeyframesCount;
    bool  _originAnchorMerged;
    unsigned long long  _remainingKeyframesCount;
    unsigned long long  _remainingWeakKeyframesCount;
}

@property (nonatomic) unsigned long long anchorsCount;
@property (nonatomic) unsigned long long externalKeyframesCount;
@property (nonatomic) unsigned long long externalWeakKeyframesCount;
@property (nonatomic) unsigned long long localSessionIdentifier;
@property (nonatomic) unsigned long long mergedKeyframesCount;
@property (nonatomic) bool originAnchorMerged;
@property (nonatomic) unsigned long long remainingKeyframesCount;
@property (nonatomic) unsigned long long remainingWeakKeyframesCount;

- (unsigned long long)anchorsCount;
- (unsigned long long)externalKeyframesCount;
- (unsigned long long)externalWeakKeyframesCount;
- (unsigned long long)localSessionIdentifier;
- (unsigned long long)mergedKeyframesCount;
- (bool)originAnchorMerged;
- (unsigned long long)remainingKeyframesCount;
- (unsigned long long)remainingWeakKeyframesCount;
- (void)setAnchorsCount:(unsigned long long)arg1;
- (void)setExternalKeyframesCount:(unsigned long long)arg1;
- (void)setExternalWeakKeyframesCount:(unsigned long long)arg1;
- (void)setLocalSessionIdentifier:(unsigned long long)arg1;
- (void)setMergedKeyframesCount:(unsigned long long)arg1;
- (void)setOriginAnchorMerged:(bool)arg1;
- (void)setRemainingKeyframesCount:(unsigned long long)arg1;
- (void)setRemainingWeakKeyframesCount:(unsigned long long)arg1;

@end
