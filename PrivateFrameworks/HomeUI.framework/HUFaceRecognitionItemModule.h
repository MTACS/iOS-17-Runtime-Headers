
@interface HUFaceRecognitionItemModule : HFItemModule {
    HFStaticItem * _faceRecognitionCellItem;
    HMHome * _home;
    HFStaticItemProvider * _staticItemProvider;
}

@property (nonatomic, retain) HFStaticItem *faceRecognitionCellItem;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)faceRecognitionCellItem;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2;
- (id)itemProviders;
- (void)setFaceRecognitionCellItem:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (id)staticItemProvider;

@end
