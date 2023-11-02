
@interface STStatusItemVisualDescriptor : NSObject <BSDebugDescriptionProviding, NSCopying, NSSecureCoding> {
    bool  _callToAction;
    NSString * _imageName;
    NSString * _packageName;
    NSString * _systemImageName;
    NSString * _textLabel;
}

@property (getter=isCallToAction, nonatomic, readonly) bool callToAction;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly, copy) NSString *packageName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) NSString *textLabel;

+ (id)_defaultVisualDescriptors;
+ (bool)supportsSecureCoding;
+ (id)visualDescriptorForStatusItemWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageName;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (bool)isCallToAction;
- (bool)isEqual:(id)arg1;
- (id)packageName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)systemImageName;
- (id)textLabel;

@end
