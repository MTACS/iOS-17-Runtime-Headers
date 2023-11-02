
@interface _SBAmbientOverridableDateProvider : NSObject <AMUIDateProviding> {
    SBFOverridableDateProvider * _dateProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)date;
- (id)init;
- (id)observeMinuteUpdatesWithHandler:(id /* block */)arg1;
- (void)removeMinuteUpdateHandler:(id)arg1;

@end
