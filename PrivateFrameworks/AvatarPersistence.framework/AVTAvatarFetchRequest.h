
@interface AVTAvatarFetchRequest : NSObject {
    long long  _criteria;
    NSArray * _excludingIdentifiers;
    long long  _fetchLimit;
    NSArray * _identifiers;
}

@property (nonatomic, readonly) long long criteria;
@property (nonatomic, readonly, copy) NSArray *excludingIdentifiers;
@property (nonatomic, readonly) long long fetchLimit;
@property (nonatomic, readonly, copy) NSArray *identifiers;

+ (id)requestForAllAvatars;
+ (id)requestForAllAvatarsExcluding:(id)arg1;
+ (id)requestForAvatarWithIdentifier:(id)arg1;
+ (id)requestForAvatarsWithIdentifiers:(id)arg1;
+ (id)requestForCustomAvatars;
+ (id)requestForCustomAvatarsWithLimit:(long long)arg1;
+ (id)requestForPredefinedAvatars;
+ (id)requestForPredefinedAvatarsExcluding:(id)arg1;
+ (id)requestForStorePrimaryAvatar;

- (void).cxx_destruct;
- (long long)criteria;
- (id)excludingIdentifiers;
- (long long)fetchLimit;
- (unsigned long long)hash;
- (id)identifiers;
- (id)initWithCriteria:(long long)arg1;
- (id)initWithCriteria:(long long)arg1 identifier:(id)arg2;
- (id)initWithCriteria:(long long)arg1 identifiers:(id)arg2 excludedIdentifiers:(id)arg3 fetchLimit:(long long)arg4;
- (bool)isEqual:(id)arg1;

@end
