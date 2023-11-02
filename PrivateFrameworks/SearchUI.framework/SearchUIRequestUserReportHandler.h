
@interface SearchUIRequestUserReportHandler : SearchUICommandHandler

+ (id)createUserReportViewControllerWith:(id)arg1 rowModel:(id)arg2 environment:(id)arg3;
+ (id)fallbackCommandForRowModel:(id)arg1 environment:(id)arg2;

- (id)contextMenu;
- (id)createViewControllerForCommand:(id)arg1 environment:(id)arg2;
- (unsigned long long)destination;
- (bool)prefersContextMenu;
- (bool)prefersModalPresentation;

@end
