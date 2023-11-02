
@protocol SHSheetContentView <SHSheetTestingContent>

@required

- (void)didUpdateAirDropTransferWithChange:(SFAirDropTransferChange *)arg1;
- (LPLinkMetadata *)headerMetadata;
- (<SHSheetContentPresenter> *)presenter;
- (void)reloadActivity:(UIActivity *)arg1;
- (void)reloadContent;
- (void)reloadMetadata:(LPLinkMetadata *)arg1;
- (void)setPresenter:(id <SHSheetContentPresenter>)arg1;
- (void)startPulsingActivity:(UIActivity *)arg1 localizedTitle:(NSString *)arg2;
- (void)stopPulsingActivity:(UIActivity *)arg1;
- (void)updateWithViewModel:(id <SHSheetContentViewModel>)arg1;

@end
