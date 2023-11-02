
@interface FCForYouGroupConfiguration : NSObject <NSCopying> {
    bool  _allowsNativeAds;
    unsigned long long  _groupPosition;
    long long  _groupType;
    NSString * _identifier;
    unsigned long long  _precedingGroupsCount;
    unsigned long long  _precedingGroupsCountForFirstGroup;
}

@property (nonatomic) bool allowsNativeAds;
@property (nonatomic) unsigned long long groupPosition;
@property (nonatomic) long long groupType;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) unsigned long long precedingGroupsCount;
@property (nonatomic) unsigned long long precedingGroupsCountForFirstGroup;

- (void).cxx_destruct;
- (bool)allowsNativeAds;
- (long long)compareGroupPosition:(id)arg1;
- (id)copyWithGroupPosition:(unsigned long long)arg1 precedingGroupsCount:(unsigned long long)arg2 precedingGroupsCountForFirstGroup:(unsigned long long)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)groupPosition;
- (long long)groupType;
- (id)identifier;
- (unsigned long long)precedingGroupsCount;
- (unsigned long long)precedingGroupsCountForFirstGroup;
- (void)setAllowsNativeAds:(bool)arg1;
- (void)setGroupPosition:(unsigned long long)arg1;
- (void)setGroupType:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPrecedingGroupsCount:(unsigned long long)arg1;
- (void)setPrecedingGroupsCountForFirstGroup:(unsigned long long)arg1;

@end
