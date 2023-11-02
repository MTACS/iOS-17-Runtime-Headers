
@interface PageLoadTest : NSObject {
    _WKRemoteObjectInterface * _eventsListenerInterface;
    NSArray * _pagesNeedingMemoryWarningSent;
    TabDocument * _tabDocument;
}

- (void).cxx_destruct;
- (void)_enablePageLoadMeasurementCollection;
- (void)_invalidateRemoteObjects;
- (void)_setUpPageLoadTestEventsListener;
- (void)_setUpWebProcessForPageLoadMeasurementCollection;
- (void)dealloc;
- (void)didFinishPageLoadWithLoadData:(id)arg1;
- (id)initWithTabDocument:(id)arg1;
- (id)initWithTabDocument:(id)arg1 pagesNeedingMemoryWarningSent:(id)arg2;
- (void)resetAfterWebProcessCrash;

@end
