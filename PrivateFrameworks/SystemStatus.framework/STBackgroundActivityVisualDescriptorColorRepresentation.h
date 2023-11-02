
@interface STBackgroundActivityVisualDescriptorColorRepresentation : NSObject <BSDebugDescriptionProviding, NSSecureCoding> {
    BSColor * _BSColor;
    NSString * _patternColorKitImageName;
    NSString * _systemColorName;
}

@property (nonatomic, readonly) BSColor *BSColor;
@property (nonatomic, readonly) UIColor *UIColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *patternColorKitImageName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *systemColorName;

// Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)BSColor;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPatternColorKitImageName:(id)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (id)initWithSystemColorName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)patternColorKitImageName;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)systemColorName;

// Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI

- (id)UIColor;

@end
