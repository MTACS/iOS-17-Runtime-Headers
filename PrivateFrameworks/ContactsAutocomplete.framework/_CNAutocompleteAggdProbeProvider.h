
@interface _CNAutocompleteAggdProbeProvider : NSObject <CNAutocompleteProbeProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)performanceProbe;
- (id)suggestionsProbe;
- (id)usageMonitorProbe;

@end
