
@interface PXBlockActionPerformer : PXActionPerformer {
    PXBlockActionManager * _actionManager;
    PXBlockActionConfiguration * _configuration;
}

@property (nonatomic) PXBlockActionManager *actionManager;
@property (nonatomic, readonly, copy) PXBlockActionConfiguration *configuration;

- (void).cxx_destruct;
- (id)actionManager;
- (id)configuration;
- (id)initWithActionType:(id)arg1 configuration:(id)arg2;
- (void)performUserInteractionTask;
- (void)setActionManager:(id)arg1;

@end
