
@interface JFXRemoteCommandServer : NSObject {
    <JFXRemoteCommandServerDelegate> * _delegate;
    NSDistributedNotificationCenter * _distributedNotificationCenter;
}

@property (nonatomic) <JFXRemoteCommandServerDelegate> *delegate;
@property (nonatomic, retain) NSDistributedNotificationCenter *distributedNotificationCenter;

- (void).cxx_destruct;
- (id)delegate;
- (id)distributedNotificationCenter;
- (id)initWithDelegate:(id)arg1;
- (void)onAddAREffectWithIdentifierNotification:(id)arg1;
- (void)onAddEffectWithIdentifierNotification:(id)arg1;
- (void)onAddEffectWithNameNotification:(id)arg1;
- (void)onAddPosterWithIdentifierNotification:(id)arg1;
- (void)onAddPosterWithNameNotification:(id)arg1;
- (void)onAddShapeWithIdentifierNotification:(id)arg1;
- (void)onAddStickerNotification:(id)arg1;
- (void)onAddStickerWithIdentifierNotification:(id)arg1;
- (void)onAddTextNotification:(id)arg1;
- (void)onExportProjectNotification:(id)arg1;
- (void)onExportProjectResponseNotification:(id)arg1;
- (void)onGetEffectsRequest:(id)arg1;
- (void)onGetEffectsResponse:(id)arg1;
- (void)onNewProjectNotification:(id)arg1;
- (void)onOpenProjectNotification:(id)arg1;
- (void)onOpenProjectPickerNotification:(id)arg1;
- (void)onPlayClipAtIndexNotification:(id)arg1;
- (void)onPlayNotification:(id)arg1;
- (void)onRecordNotification:(id)arg1;
- (void)onRemoveEffectsNotification:(id)arg1;
- (void)onSetAnimojiNotification:(id)arg1;
- (void)onSetAspectRatioNotification:(id)arg1;
- (void)onSetFilterWithIdentifierNotification:(id)arg1;
- (void)onSetMemojiWithContentsOfFileNotification:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDistributedNotificationCenter:(id)arg1;

@end
