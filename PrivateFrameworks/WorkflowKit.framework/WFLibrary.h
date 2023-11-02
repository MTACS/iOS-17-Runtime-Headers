
@interface WFLibrary : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  capsule;
    void identifier;
    void onChange;
    void version;
}

@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) NSString *dotRepresentation;
@property (nonatomic, readonly) NSArray *folders;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSArray *shortcutIdentifiers;
@property (nonatomic, readonly) NSString *version;

+ (void)performWithoutNotifyingObservers:(id /* block */)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (bool)addShortcutWithIdentifier:(id)arg1 toCollectionWithIdentifier:(id)arg2 error:(id*)arg3;
- (id)capsuleDataWithError:(id*)arg1;
- (id)collectionWithIdentifier:(id)arg1;
- (id)collectionWithWorkflowType:(id)arg1;
- (id)collections;
- (id)collectionsContainingShortcut:(id)arg1 error:(id*)arg2;
- (id)dotRepresentation;
- (id)folderContainingShortcut:(id)arg1 error:(id*)arg2;
- (id)folders;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 data:(id)arg3 onChange:(id /* block */)arg4;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 onChange:(id /* block */)arg3;
- (id)insertFolderWithName:(id)arg1 icon:(unsigned short)arg2 identifier:(id)arg3 error:(id*)arg4;
- (void)insertShortcutWithName:(id)arg1 id:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)mergeWithOther:(id)arg1 error:(id*)arg2;
- (bool)moveShortcutWithIdentifier:(id)arg1 toFolder:(id)arg2 error:(id*)arg3;
- (bool)moveShortcutWithIdentifier:(id)arg1 toIndex:(long long)arg2 ofCollectionWithIdentifier:(id)arg3 error:(id*)arg4;
- (bool)removeShortcutWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)shortcutIdentifiers;
- (id)shortcutIdentifiersWithQuery:(id)arg1 error:(id*)arg2;
- (id)shortcutsInFolderWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)tombstoneFolderWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)updateFolderWithIdentifier:(id)arg1 newName:(id)arg2 newIcon:(unsigned short)arg3 error:(id*)arg4;
- (id)version;

@end
