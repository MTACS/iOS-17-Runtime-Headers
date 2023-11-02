
@interface LNViewSnippet : NSObject <NSCopying, NSSecureCoding> {
    NSString * _containerBundleIdentifier;
    NSString * _targetBundleIdentifier;
    NSData * _viewData;
}

@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *targetBundleIdentifier;
@property (nonatomic, readonly, copy) NSData *viewData;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerBundleIdentifier:(id)arg1 targetBundleIdentifier:(id)arg2 viewData:(id)arg3;
- (id)targetBundleIdentifier;
- (id)viewData;

// Image: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI

- (id)viewControllerWithTapHandler:(id /* block */)arg1;

@end
