
@interface WBSWebExtensionContextMenuItemInfo : NSObject {
    bool  _checked;
    NSSet * _contexts;
    NSArray * _documentURLPatterns;
    bool  _enabled;
    NSUUID * _extensionIdentifier;
    NSObject<NSCopying> * _identifier;
    NSDictionary * _originalProperties;
    NSObject<NSCopying> * _parentIdentifier;
    NSArray * _targetURLPatterns;
    NSString * _title;
    long long  _type;
    bool  _visible;
}

@property (nonatomic, readonly) bool checked;
@property (nonatomic, readonly, copy) NSSet *contexts;
@property (nonatomic, readonly, copy) NSArray *documentURLPatterns;
@property (nonatomic, readonly) bool enabled;
@property (nonatomic, readonly) NSUUID *extensionIdentifier;
@property (nonatomic, readonly, copy) NSObject<NSCopying> *identifier;
@property (nonatomic, readonly, copy) NSObject<NSCopying> *parentIdentifier;
@property (nonatomic, readonly, copy) NSArray *targetURLPatterns;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) bool visible;

- (void).cxx_destruct;
- (id)_configureWithProperties:(id)arg1;
- (bool)_containsItemContextMatchingMenuContext:(id)arg1 contextTypes:(id)arg2;
- (bool)_itemContextType:(long long)arg1 matchesMenuContext:(id)arg2 sourceURLMatchesTargetURLPatterns:(bool)arg3 linkURLMatchesTargetURLPatterns:(bool)arg4;
- (id)_titleForDisplayInContext:(id)arg1;
- (bool)canBeShownInContext:(id)arg1;
- (bool)canBeShownInContext:(id)arg1 inheritedContextTypes:(id)arg2;
- (bool)checked;
- (id)contexts;
- (id)documentURLPatterns;
- (bool)enabled;
- (id)extensionIdentifier;
- (id)identifier;
- (id)initWithProperties:(id)arg1 extensionIdentifier:(id)arg2 outErrorMessage:(id*)arg3;
- (id)itemInfoByTogglingCheckedState;
- (id)itemInfoByUpdatingProperties:(id)arg1 outErrorMessage:(id*)arg2;
- (id)parentIdentifier;
- (id)targetURLPatterns;
- (id)title;
- (long long)type;
- (bool)visible;

@end
