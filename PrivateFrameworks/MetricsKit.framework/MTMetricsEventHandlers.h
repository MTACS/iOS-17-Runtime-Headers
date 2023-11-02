
@interface MTMetricsEventHandlers : MTEventHandlers {
    MTFlexibleEventHandler * _flexible;
}

@property (nonatomic, readonly) MTAccountEventHandler *account;
@property (nonatomic, readonly) MTClickEventHandler *click;
@property (nonatomic, readonly) MTDialogEventHandler *dialog;
@property (nonatomic, readonly) MTEnterEventHandler *enter;
@property (nonatomic, readonly) MTExitEventHandler *exit;
@property (nonatomic, readonly) MTFlexibleEventHandler *flexible;
@property (nonatomic, readonly) MTImpressionsEventHandler *impressions;
@property (nonatomic, readonly) MTMediaEventHandler *media;
@property (nonatomic, readonly) MTPageEventHandler *page;
@property (nonatomic, readonly) MTSearchEventHandler *search;

- (void).cxx_destruct;
- (id)account;
- (Class)baseDataProviderClass;
- (id)click;
- (id)dialog;
- (id)enter;
- (id)exit;
- (id)flexible;
- (id)impressions;
- (id)media;
- (id)page;
- (void)registerDefaultEventHandlers;
- (id)search;

@end
