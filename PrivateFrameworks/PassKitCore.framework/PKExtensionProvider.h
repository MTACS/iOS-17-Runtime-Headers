
@interface PKExtensionProvider : NSObject {
    NSMutableArray * _beginMatchingCompletions;
    NSObject<OS_dispatch_source> * _extensionMatchTimer;
    NSString * _extensionPoint;
    NSObject<OS_dispatch_queue> * _extensionQueue;
    bool  _isBeginningMatching;
    id  _matchingContext;
    NSDictionary * _passKitExtensions;
}

@property (nonatomic, retain) NSMutableArray *beginMatchingCompletions;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *extensionMatchTimer;
@property (nonatomic, copy) NSString *extensionPoint;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *extensionQueue;
@property (nonatomic) bool isBeginningMatching;
@property (nonatomic, retain) id matchingContext;
@property (nonatomic, retain) NSDictionary *passKitExtensions;

// Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

+ (id)providerForExtensionPoint:(id)arg1;

- (void).cxx_destruct;
- (void)_beginMatchingExtensionsWithCompletion:(id /* block */)arg1;
- (void)_endMatchingExtensions;
- (id)_extensionMatchingEntitlementAttribute;
- (id)_extensionsForContainingApplicationIdentifiers:(id)arg1;
- (void)_finishedMatchingExtensions:(id)arg1 withError:(id)arg2;
- (void)_invokeAndClearBeginMatchingCompletionsWithError:(id)arg1;
- (void)beginExtensionRequestWithExtension:(id)arg1 inputItems:(id)arg2 completion:(id /* block */)arg3;
- (id)beginMatchingCompletions;
- (void)dealloc;
- (id)extensionMatchTimer;
- (id)extensionPoint;
- (id)extensionQueue;
- (void)extensionWithBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)extensionsWithContainingApplicationIdentifiers:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithExtensionPoint:(id)arg1;
- (bool)isBeginningMatching;
- (id)matchingContext;
- (id)passKitExtensions;
- (void)setBeginMatchingCompletions:(id)arg1;
- (void)setExtensionMatchTimer:(id)arg1;
- (void)setExtensionPoint:(id)arg1;
- (void)setExtensionQueue:(id)arg1;
- (void)setIsBeginningMatching:(bool)arg1;
- (void)setMatchingContext:(id)arg1;
- (void)setPassKitExtensions:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI

- (void)_beginRemoteViewControllerExtensionServiceWithExtension:(id)arg1 inputItems:(id)arg2 completion:(id /* block */)arg3;

@end
