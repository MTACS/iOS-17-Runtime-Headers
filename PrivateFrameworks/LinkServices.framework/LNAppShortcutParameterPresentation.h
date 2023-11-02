
@interface LNAppShortcutParameterPresentation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localizedSpecificTitle;
    NSArray * _optionsCollections;
    NSString * _parameterIdentifier;
}

@property (nonatomic, readonly, copy) NSString *localizedGenericTitle;
@property (nonatomic, readonly, copy) NSString *localizedSpecificTitle;
@property (nonatomic, readonly, copy) NSArray *optionsCollections;
@property (nonatomic, readonly, copy) NSString *parameterIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterIdentifier:(id)arg1 localizedSpecificTitle:(id)arg2 localizedGenericTitle:(id)arg3 optionsCollections:(id)arg4;
- (id)initWithParameterIdentifier:(id)arg1 localizedSpecificTitle:(id)arg2 optionsCollections:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedGenericTitle;
- (id)localizedSpecificTitle;
- (id)optionsCollections;
- (id)parameterIdentifier;

@end
