
@interface LNAppShortcutParameterPresentationMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSString * _localizationTable;
    NSArray * _optionsCollection;
    NSString * _parameterIdentifier;
    LNActionSummaryString * _specificTitle;
}

@property (nonatomic, readonly, copy) NSString *genericTitle;
@property (nonatomic, readonly, copy) NSString *localizationTable;
@property (nonatomic, readonly, copy) NSArray *optionsCollection;
@property (nonatomic, readonly, copy) NSString *parameterIdentifier;
@property (nonatomic, readonly, copy) LNActionSummaryString *specificTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)genericTitle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterIdentifier:(id)arg1 specificTitle:(id)arg2 genericTitle:(id)arg3 localizationTable:(id)arg4 optionsCollection:(id)arg5;
- (id)initWithParameterIdentifier:(id)arg1 specificTitle:(id)arg2 localizationTable:(id)arg3 optionsCollection:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)localizationTable;
- (id)optionsCollection;
- (id)parameterIdentifier;
- (id)specificTitle;

@end
