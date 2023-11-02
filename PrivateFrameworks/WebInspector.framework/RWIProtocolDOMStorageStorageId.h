
@interface RWIProtocolDOMStorageStorageId : RWIProtocolJSONObject

@property (nonatomic) bool isLocalStorage;
@property (nonatomic, copy) NSString *securityOrigin;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithSecurityOrigin:(id)arg1 isLocalStorage:(bool)arg2;
- (bool)isLocalStorage;
- (id)securityOrigin;
- (void)setIsLocalStorage:(bool)arg1;
- (void)setSecurityOrigin:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithSecurityOrigin:(id)arg1 isLocalStorage:(bool)arg2;

@end
