
@interface SearchUIShowStoreSheetHandler : SearchUICommandHandler

+ (id)fallbackCommandForRowModel:(id)arg1 environment:(id)arg2;

- (id)createViewControllerForCommand:(id)arg1 environment:(id)arg2;
- (unsigned long long)destination;
- (bool)prefersModalPresentation;

@end
