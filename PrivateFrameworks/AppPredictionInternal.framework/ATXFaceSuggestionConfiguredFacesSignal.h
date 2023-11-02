
@interface ATXFaceSuggestionConfiguredFacesSignal : NSObject <ATXFaceSuggestionSignal> {
    NSCountedSet * _configuredExtensionBundleIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double weight;

- (void).cxx_destruct;
- (void)_prepare;
- (id)init;
- (double)valueForDescriptor:(id)arg1;
- (double)weight;

@end
