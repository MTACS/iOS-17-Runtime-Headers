
@interface SXActionComponentInteractionHandler : NSObject <SXComponentInteractionHandler, SXPostActionHandler, SXPreviewComponentInteractionHandler> {
    <SXAction> * _action;
    <SXActionManager> * _actionManager;
    <SXActionSerializer> * _actionSerializer;
    <SXAnalyticsReportingProvider> * _analyticsReportingProvider;
}

@property (nonatomic, readonly) <SXAction> *action;
@property (nonatomic, readonly) <SXActionManager> *actionManager;
@property (nonatomic, readonly) <SXActionSerializer> *actionSerializer;
@property (nonatomic, readonly) <SXAnalyticsReportingProvider> *analyticsReportingProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (id)actionManager;
- (id)actionSerializer;
- (id)analyticsReportingProvider;
- (void)commitViewController:(id)arg1;
- (id)contextMenuForComponentView:(id)arg1 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)handleInteractionType:(unsigned long long)arg1 sourceView:(id)arg2 sourceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)handledAction:(id)arg1 state:(unsigned long long)arg2;
- (id)initWithAction:(id)arg1 actionManager:(id)arg2 actionSerializer:(id)arg3 analyticsReportingProvider:(id)arg4;
- (id)previewViewController;
- (id)toolTipForComponentView:(id)arg1;

@end
