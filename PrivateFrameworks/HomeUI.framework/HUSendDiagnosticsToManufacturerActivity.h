
@interface HUSendDiagnosticsToManufacturerActivity : UIActivity {
    HFAccessoryDiagnosticItem * _diagnosticItem;
}

@property (nonatomic, retain) HFAccessoryDiagnosticItem *diagnosticItem;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)diagnosticItem;
- (id)initWithDiagnosticItem:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setDiagnosticItem:(id)arg1;

@end
