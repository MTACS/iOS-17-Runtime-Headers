
@interface BRCPCSChainInfo : NSObject {
    bool  _aliasTargetZoneIsShared;
    unsigned int  _chainState;
    BRFieldCKInfo * _contentCKInfo;
    BRCItemID * _itemID;
    BOOL  _itemType;
    BRCItemID * _parentID;
    BRFieldCKInfo * _structuralCKInfo;
}

@property (nonatomic, readonly) bool aliasTargetZoneIsShared;
@property (nonatomic, readonly) unsigned int chainState;
@property (nonatomic, readonly) BRFieldCKInfo *contentCKInfo;
@property (nonatomic, readonly) BRCItemID *itemID;
@property (nonatomic, readonly) BOOL itemType;
@property (nonatomic, readonly) BRCItemID *parentID;
@property (nonatomic, readonly) BRFieldCKInfo *structuralCKInfo;

- (void).cxx_destruct;
- (bool)aliasTargetZoneIsShared;
- (unsigned int)chainState;
- (id)contentCKInfo;
- (id)initWithItemID:(id)arg1 parentID:(id)arg2 structuralCKInfo:(id)arg3 contentCKInfo:(id)arg4 itemType:(BOOL)arg5 aliasTargetZoneIsShared:(bool)arg6 chainState:(unsigned int)arg7;
- (id)itemID;
- (BOOL)itemType;
- (id)parentID;
- (id)structuralCKInfo;

@end
