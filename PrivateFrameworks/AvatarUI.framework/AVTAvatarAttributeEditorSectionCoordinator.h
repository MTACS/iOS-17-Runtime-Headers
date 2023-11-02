
@interface AVTAvatarAttributeEditorSectionCoordinator : NSObject <AVTAvatarAttributeEditorControllerSubSelectionDelegate> {
    <AVTAvatarAttributeEditorControllerSubSelectionDelegate> * _delegate;
    NSMutableDictionary * _sectionControllers;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AVTAvatarAttributeEditorControllerSubSelectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *sectionControllers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addSectionController:(id)arg1;
- (void)attributeEditorSectionController:(id)arg1 didDeleteSectionItems:(id)arg2;
- (void)attributeEditorSectionController:(id)arg1 didSelectSectionItem:(id)arg2;
- (void)attributeEditorSectionController:(id)arg1 didUpdateSectionItem:(id)arg2;
- (void)attributeEditorSectionControllerNeedsLayoutUpdate:(id)arg1;
- (id)delegate;
- (id)init;
- (bool)isCoordinatingForSectionController:(id)arg1;
- (void)removeSectionController:(id)arg1;
- (id)sectionControllers;
- (void)setDelegate:(id)arg1;
- (void)setSectionControllers:(id)arg1;

@end
