
@interface PKRewardsTierEducationSection : NSObject <NSSecureCoding> {
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
    unsigned long long  _tier;
}

@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long tier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTier:(unsigned long long)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (unsigned long long)tier;

@end
