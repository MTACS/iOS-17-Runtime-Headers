
@interface SearchUIOpenPunchoutHandler : SearchUICommandHandler

@property (readonly) SFOpenPunchoutCommand *command;

+ (id)fallbackCommandForRowModel:(id)arg1 environment:(id)arg2;
+ (void)handlePunchout:(id)arg1 triggerEvent:(unsigned long long)arg2;
+ (id)queryItemValueForName:(id)arg1 inURL:(id)arg2;

- (id)createViewControllerForCommand:(id)arg1 environment:(id)arg2;
- (id)defaultSymbolName;
- (id)defaultTitle;
- (id)destinationPunchout;
- (void)fetchShareableURLWithCompletionHandler:(id /* block */)arg1;
- (id)itemProviderForCopy;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (bool)prefersModalPresentation;
- (bool)schemeSupportedForCopyAndShare;
- (bool)supportsCopy;
- (bool)supportsShare;
- (id)url;

@end
