
@interface SearchUICreateContactHandler : SearchUICommandHandler

- (id)contactFromCommand;
- (id)createViewControllerForCommand:(id)arg1 environment:(id)arg2;
- (unsigned long long)destination;
- (bool)prefersContextMenu;
- (bool)prefersModalPresentation;

@end
