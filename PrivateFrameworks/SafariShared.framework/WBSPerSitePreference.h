
@interface WBSPerSitePreference : NSObject <NSCopying> {
    NSString * _identifier;
}

@property (nonatomic, readonly, copy) NSString *identifier;

+ (id)localizedStringForBinaryPreferenceValue:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
