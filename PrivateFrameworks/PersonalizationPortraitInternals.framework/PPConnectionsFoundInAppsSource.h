
@interface PPConnectionsFoundInAppsSource : PPConnectionsSource <PPConnectionsLocationSource> {
    <SGSuggestionsServiceURLsProtocol> * _fiaURLService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)identifier;
- (id)init;
- (id)initWithFoundInAppsService:(id)arg1;
- (id)locationItemsWithCriteria:(id)arg1 earliest:(id)arg2 latest:(id)arg3 limit:(unsigned long long)arg4 consumer:(unsigned long long)arg5 explanationSet:(id)arg6;

@end
