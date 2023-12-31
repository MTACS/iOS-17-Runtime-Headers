
@interface CNAutocompleteNetworkActivityThrottlingPolicy : NSObject <CNAutocompleteNetworkActivityPolicy> {
    unsigned long long  _lengthOfString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (double)delayBeforeBeginningNetworkActivity;
- (id)initWithString:(id)arg1;
- (bool)shouldSearchServers;

@end
