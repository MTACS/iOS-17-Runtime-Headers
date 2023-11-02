
@interface LNActionConfigurationSwitch : LNActionConfiguration <NSCopying, NSSecureCoding> {
    NSArray * _cases;
    NSString * _parameterIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *cases;
@property (nonatomic, readonly, copy) NSString *parameterIdentifier;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cases;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithParameterIdentifier:(id)arg1 cases:(id)arg2;
- (id)initWithWidgetFamilyCases:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)parameterIdentifier;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)actionConfigurationByEvaluatingAction:(id)arg1;
- (id)actionConfigurationByEvaluatingAction:(id)arg1 context:(id)arg2;
- (id)valueForAction:(id)arg1 context:(id)arg2;

@end
