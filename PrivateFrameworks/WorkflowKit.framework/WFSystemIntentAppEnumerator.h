
@interface WFSystemIntentAppEnumerator : NSObject {
    NSDictionary * _identifiersByIntentName;
    NSDictionary * _identifiersByUserActivityType;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerate;
- (id)init;
- (id)supportedIdentifiersForIntentClassName:(id)arg1 includingUserActivityBasedApps:(bool)arg2;

@end
