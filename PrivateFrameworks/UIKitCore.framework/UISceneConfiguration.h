
@interface UISceneConfiguration : NSObject <BSDebugDescriptionProviding, NSCopying, NSSecureCoding> {
    Class  _delegateClass;
    bool  _fromPlist;
    bool  _hadResolutionErrorsOnLoad;
    bool  _isDefault;
    NSString * _name;
    NSString * _role;
    Class  _sceneClass;
    UIStoryboard * _storyboard;
}

@property (nonatomic, readonly) bool _fromPlist;
@property (nonatomic, readonly) bool _hadResolutionErrorsOnLoad;
@property (nonatomic, readonly) bool _isDefault;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) Class delegateClass;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *role;
@property (nonatomic, retain) Class sceneClass;
@property (nonatomic, retain) UIStoryboard *storyboard;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)configurationWithName:(id)arg1 sessionRole:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_fromPlist;
- (bool)_hadResolutionErrorsOnLoad;
- (id)_initWithConfiguration:(id)arg1;
- (id)_initWithLoadErrorForSessionRole:(id)arg1;
- (bool)_isDefault;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (Class)delegateClass;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 sessionRole:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)role;
- (Class)sceneClass;
- (void)setDelegateClass:(Class)arg1;
- (void)setSceneClass:(Class)arg1;
- (void)setStoryboard:(id)arg1;
- (id)storyboard;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/Frameworks/SwiftUI.framework/SwiftUI

- (id)sceneDelegate;

@end
