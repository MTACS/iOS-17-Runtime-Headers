
@interface BCSBusinessLinkContentItemModel : NSObject <BCSBusinessLinkContentItemDescribing, BSDescriptionProviding, NSCopying, NSSecureCoding> {
    bool  _isDefault;
    NSString * _language;
    NSString * _subtitle;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *language;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBusinessLinkContent:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)language;
- (id)subtitle;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)title;

@end
