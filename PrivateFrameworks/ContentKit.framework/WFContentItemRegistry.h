
@interface WFContentItemRegistry : NSObject {
    NSMutableSet * _allItemClasses;
    NSMutableDictionary * _contentItemClassesByType;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _discoveryLock;
}

@property (nonatomic, readonly) NSMutableSet *allItemClasses;
@property (nonatomic, readonly) NSSet *allOwnedTypes;
@property (nonatomic, readonly) NSSet *contentItemClasses;
@property (nonatomic, readonly) NSMutableDictionary *contentItemClassesByType;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } discoveryLock;

// Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit

+ (id)allContentItemClassesInContentKit;
+ (id)inputContentItemClassesMatchingShortcutInputClasses:(id)arg1;
+ (id)sharedRegistry;
+ (id)shortcutInputClassesMatchingInputContentItemsOfClasses:(id)arg1 hostBundleIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)allItemClasses;
- (id)allOwnedTypes;
- (Class)contentItemClassForType:(id)arg1;
- (id)contentItemClasses;
- (id)contentItemClassesByType;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1;
- (id)contentItemClassesForShareSheetWithExtensionMatchingDictionaries:(id)arg1 hostBundleIdentifier:(id)arg2;
- (id)contentItemClassesSupportingType:(id)arg1;
- (struct os_unfair_lock_s { unsigned int x1; })discoveryLock;
- (id)init;
- (void)rediscoverContentItemClassesIfNeeded;
- (void)registerContentItemClass:(Class)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)allContentItemClassesInActionKit;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)allContentItemClassesInWorkflowKit;

@end
