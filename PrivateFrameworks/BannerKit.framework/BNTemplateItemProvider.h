
@interface BNTemplateItemProvider : NSObject <BNTemplateTextProviding, BNTemplateViewProviding> {
    NSString * _accessibilityIdentifier;
    bool  _hidden;
    id  _templateItem;
    long long  _templateItemType;
    long long  _visualStyle;
    long long  _visualStyleCategory;
}

@property (nonatomic, copy) NSString *accessibilityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic) bool hidden;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSAttributedString *templateItemAttributedText;
@property (nonatomic, readonly) UIButtonConfiguration *templateItemButtonConfiguration;
@property (nonatomic, readonly) <BNImageProviding> *templateItemImageProvider;
@property (nonatomic, readonly, copy) NSString *templateItemText;
@property (nonatomic) long long visualStyle;
@property (nonatomic) long long visualStyleCategory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilityIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItem:(id)arg1;
- (bool)isHidden;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setVisualStyle:(long long)arg1;
- (void)setVisualStyleCategory:(long long)arg1;
- (id)templateItemAttributedText;
- (id)templateItemButtonConfiguration;
- (id)templateItemImageProvider;
- (id)templateItemText;
- (long long)visualStyle;
- (long long)visualStyleCategory;

@end
