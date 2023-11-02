
@interface WBSWebExtensionContextMenuItem : NSObject {
    NSArray * _children;
    WBSWebExtensionContextMenuContext * _context;
    WBSWebExtensionContextMenuItemInfo * _info;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) WBSWebExtensionContextMenuContext *context;
@property (nonatomic, readonly) WBSWebExtensionContextMenuItemInfo *info;

+ (id)itemWithInfo:(id)arg1 children:(id)arg2 context:(id)arg3;

- (void).cxx_destruct;
- (id)children;
- (id)context;
- (id)info;

@end
