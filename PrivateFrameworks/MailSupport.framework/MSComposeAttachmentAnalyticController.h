
@interface MSComposeAttachmentAnalyticController : NSObject {
    MSDiagnosticManager * _diagnosticManager;
    long long  _totalDrawingsInsertedCount;
}

@property (nonatomic, retain) MSDiagnosticManager *diagnosticManager;

- (void).cxx_destruct;
- (void)_submitFinalDrawingInsertCount:(long long)arg1 sentMessage:(bool)arg2;
- (void)abandonMessageWithActualDrawingInsertCount:(long long)arg1;
- (id)diagnosticManager;
- (id)initWithDiagnosticManager:(id)arg1 totalDrawingsInsertedCount:(long long)arg2;
- (void)sendMessageWithActualDrawingInsertCount:(long long)arg1;
- (void)setDiagnosticManager:(id)arg1;

@end
