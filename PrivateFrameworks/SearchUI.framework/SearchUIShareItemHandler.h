
@interface SearchUIShareItemHandler : SearchUICommandHandler {
    SearchUICommandHandler * _handlerForSharing;
}

@property (retain) SearchUICommandHandler *handlerForSharing;

- (void).cxx_destruct;
- (id)defaultSymbolName;
- (id)defaultTitle;
- (unsigned long long)destination;
- (id)handlerForSharing;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (bool)prefersModalPresentation;
- (bool)presentShareViewControllerForItem:(id)arg1;
- (void)setHandlerForSharing:(id)arg1;

@end
