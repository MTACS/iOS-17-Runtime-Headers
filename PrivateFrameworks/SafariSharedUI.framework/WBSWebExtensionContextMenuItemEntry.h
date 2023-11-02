
@interface WBSWebExtensionContextMenuItemEntry : NSObject {
    NSMutableOrderedSet * _children;
    NSObject<NSCopying> * _identifier;
    WBSWebExtensionContextMenuItemInfo * _info;
    WBSWebExtensionContextMenuItemEntry * _parentEntry;
}

@property (nonatomic, readonly) NSMutableOrderedSet *children;
@property (nonatomic, readonly) NSObject<NSCopying> *identifier;
@property (nonatomic, retain) WBSWebExtensionContextMenuItemInfo *info;
@property (nonatomic) WBSWebExtensionContextMenuItemEntry *parentEntry;

- (void).cxx_destruct;
- (id)children;
- (id)description;
- (id)identifier;
- (id)info;
- (id)initWithIdentifier:(id)arg1;
- (id)parentEntry;
- (void)performWithSelfAndChildren:(id /* block */)arg1;
- (void)setInfo:(id)arg1;
- (void)setParentEntry:(id)arg1;

@end
