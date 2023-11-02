
@interface SearchUILaunchAppHandler : SearchUICommandHandler

+ (id)fallbackCommandForRowModel:(id)arg1 environment:(id)arg2;
+ (void)openApplicationWithBundleIdentifier:(id)arg1 environment:(id)arg2;

- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;

@end
