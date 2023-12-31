
@interface FCGroupTypeFeature : FCPersonalizationFeature {
    long long  _groupType;
}

@property (nonatomic) long long groupType;

- (long long)groupType;
- (id)initWithGroupType:(long long)arg1;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (void)setGroupType:(long long)arg1;

@end
