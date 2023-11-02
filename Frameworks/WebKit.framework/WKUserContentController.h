
@interface WKUserContentController : NSObject <NSSecureCoding, WKObject> {
    struct ObjectStorage<WebKit::WebUserContentControllerProxy> { 
        struct type { 
            unsigned char __lx[112]; 
        } data; 
    }  _userContentControllerProxy;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) NSArray *_userStyleSheets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSArray *userScripts;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (bool)supportsSecureCoding;

- (void)_addContentRuleList:(id)arg1 extensionBaseURL:(id)arg2;
- (void)_addScriptMessageHandler:(void*)arg1;
- (void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 contentWorld:(id)arg3;
- (void)_addScriptMessageHandler:(id)arg1 name:(id)arg2 userContentWorld:(id)arg3;
- (void)_addUserContentFilter:(id)arg1;
- (void)_addUserScriptImmediately:(id)arg1;
- (void)_addUserStyleSheet:(id)arg1;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void)_removeAllScriptMessageHandlersAssociatedWithUserContentWorld:(id)arg1;
- (void)_removeAllUserContentFilters;
- (void)_removeAllUserScriptsAssociatedWithContentWorld:(id)arg1;
- (void)_removeAllUserStyleSheets;
- (void)_removeAllUserStyleSheetsAssociatedWithContentWorld:(id)arg1;
- (void)_removeScriptMessageHandlerForName:(id)arg1 userContentWorld:(id)arg2;
- (void)_removeUserContentFilter:(id)arg1;
- (void)_removeUserScript:(id)arg1;
- (void)_removeUserStyleSheet:(id)arg1;
- (id)_userStyleSheets;
- (void)addContentRuleList:(id)arg1;
- (void)addScriptMessageHandler:(id)arg1 contentWorld:(id)arg2 name:(id)arg3;
- (void)addScriptMessageHandler:(id)arg1 name:(id)arg2;
- (void)addScriptMessageHandlerWithReply:(id)arg1 contentWorld:(id)arg2 name:(id)arg3;
- (void)addUserScript:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)removeAllContentRuleLists;
- (void)removeAllScriptMessageHandlers;
- (void)removeAllScriptMessageHandlersFromContentWorld:(id)arg1;
- (void)removeAllUserScripts;
- (void)removeContentRuleList:(id)arg1;
- (void)removeScriptMessageHandlerForName:(id)arg1;
- (void)removeScriptMessageHandlerForName:(id)arg1 contentWorld:(id)arg2;
- (id)userScripts;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_privateBrowsingUserContentController;
+ (id)safari_readerUserContentController;
+ (id)safari_readingListFetcherUserContentController;
+ (id)safari_userContentController;
+ (id)safari_webExtensionUserContentController;

@end
