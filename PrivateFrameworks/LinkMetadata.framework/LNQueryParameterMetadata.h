
@interface LNQueryParameterMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _comparators;
    LNStaticDeferredLocalizedString * _localizedTitle;
    NSString * _propertyIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *comparators;
@property (nonatomic, readonly, copy) LNStaticDeferredLocalizedString *localizedTitle;
@property (nonatomic, readonly, copy) NSString *propertyIdentifier;
@property (nonatomic, readonly, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)comparators;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyIdentifier:(id)arg1 localizedTitle:(id)arg2 comparators:(id)arg3;
- (id)initWithPropertyIdentifier:(id)arg1 title:(id)arg2 comparators:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedTitle;
- (id)propertyIdentifier;
- (id)title;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_propertyQueryWithValue:(id)arg1 contentOperator:(long long)arg2 parameterIndex:(id)arg3;
- (id)wf_supportedContentOperators;

@end
