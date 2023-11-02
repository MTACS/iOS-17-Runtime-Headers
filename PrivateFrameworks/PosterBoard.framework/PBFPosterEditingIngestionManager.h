
@interface PBFPosterEditingIngestionManager : NSObject {
    void delegate;
    void editingConfirmationViewController;
    void editingViewController;
    void galleryViewController;
    void ingestedConfiguration;
    void posterStore;
}

@property (nonatomic) <PBFPosterEditingIngestionManagerDelegate> *delegate;
@property (nonatomic) PREditingSceneViewController *editingViewController;

- (void).cxx_destruct;
- (id)delegate;
- (void)dismissViewController;
- (id)editingViewController;
- (id)ingestConfiguration:(id)arg1 updatedConfiguredProperties:(id)arg2 editingViewController:(id)arg3 galleryViewController:(id)arg4 showEditingConfirmation:(bool)arg5;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)setEditingViewController:(id)arg1;

@end
