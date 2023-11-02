
@interface _PXMutableAssetActionMenu : NSObject <PXMutableAssetActionMenu> {
    NSMutableArray * _destructiveElements;
    NSArray * _excludedActionTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSMutableArray *destructiveElements;
@property (nonatomic, copy) NSArray *excludedActionTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDestructiveElement:(id)arg1;
- (id)destructiveElements;
- (id)excludedActionTypes;
- (id)init;
- (void)setExcludedActionTypes:(id)arg1;

@end
