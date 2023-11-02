
@interface _DKComplicationMonitor : _DKMonitor {
    NSObject<OS_dispatch_source> * _timer;
    int  _tokens;
}

+ (id)entitlements;

- (void).cxx_destruct;
- (void)asyncUpdateCurrentActiveComplicationsContext;
- (void)fetchActiveComplications:(id /* block */)arg1;
- (void)start;
- (void)stop;

@end
