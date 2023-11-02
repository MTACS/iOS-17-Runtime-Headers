
@interface PKExtension : NSObject {
    NSString * _containingAppBundleIdentifier;
    NSString * _containingApplicationIdentifier;
    NSExtension * _extension;
    NSString * _identifier;
    PKExtensionProvider * _provider;
}

@property (nonatomic, retain) NSString *containingAppBundleIdentifier;
@property (nonatomic, retain) NSString *containingApplicationIdentifier;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, readonly) NSString *extensionPointIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) PKExtensionProvider *provider;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

- (void).cxx_destruct;
- (void)beginExtensionRequestWithCompletion:(id /* block */)arg1;
- (void)beginExtensionRequestWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)beginLocalExtensionServiceWithUserInteraction:(bool)arg1 completion:(id /* block */)arg2 timeout:(unsigned long long)arg3 timeoutHandler:(id /* block */)arg4;
- (void)completeLocalExtensionServiceWithCompletion:(id /* block */)arg1;
- (id)containingAppBundleIdentifier;
- (id)containingApplicationIdentifier;
- (id)description;
- (id)extension;
- (id)extensionPointIdentifier;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 extension:(id)arg2 provider:(id)arg3;
- (void)performTestExtensionServiceRequestWithCompletion:(id /* block */)arg1;
- (id)provider;
- (void)setContainingAppBundleIdentifier:(id)arg1;
- (void)setContainingApplicationIdentifier:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setProvider:(id)arg1;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)beginRemoteViewControllerExtensionServiceWithInputItems:(id)arg1 completion:(id /* block */)arg2;

@end
