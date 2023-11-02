
@interface PRSWidget : NSObject <BSDescriptionProviding, BSXPCSecureCoding, NSCopying, NSSecureCoding> {
    NSString * _containerBundleIdentifier;
    NSString * _extensionBundleIdentifier;
    unsigned long long  _family;
    INIntent * _intent;
    NSString * _kind;
    NSString * _uniqueIdentifier;
}

@property (nonatomic, copy) NSString *containerBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *extensionBundleIdentifier;
@property (nonatomic) unsigned long long family;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) INIntent *intent;
@property (nonatomic, copy) NSString *kind;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/PosterBoardServices.framework/PosterBoardServices

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)family;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 kind:(id)arg2 extensionBundleIdentifier:(id)arg3 containerBundleIdentifier:(id)arg4 family:(unsigned long long)arg5 intent:(id)arg6;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (void)setContainerBundleIdentifier:(id)arg1;
- (void)setExtensionBundleIdentifier:(id)arg1;
- (void)setFamily:(unsigned long long)arg1;
- (void)setIntent:(id)arg1;
- (void)setKind:(id)arg1;
- (void)setUniqueIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

+ (id)pbf_PRSWidgetFromComplicationLookupInfo:(id)arg1 uniqueIdentifier:(id)arg2 intent:(id)arg3;

- (id)pbf_complicationLookupInfo;

@end
