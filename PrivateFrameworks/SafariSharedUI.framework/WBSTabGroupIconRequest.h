
@interface WBSTabGroupIconRequest : WBSSiteMetadataRequest <WBSIconRequest> {
    NSString * _tabGroupUUID;
    <WBTabProvider> * _tabProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeForDrawing;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *tabGroupUUID;
@property (nonatomic, readonly) <WBTabProvider> *tabProvider;
@property (nonatomic, readonly, copy) NSArray *tabs;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithTabGroup:(id)arg1 tabProvider:(id)arg2;
- (bool)isEqual:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeForDrawing;
- (id)tabGroupUUID;
- (id)tabProvider;
- (id)tabs;
- (id)uniqueIdentifier;

@end
