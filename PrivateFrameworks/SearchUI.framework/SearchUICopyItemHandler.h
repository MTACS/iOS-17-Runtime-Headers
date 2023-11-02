
@interface SearchUICopyItemHandler : SearchUICommandHandler {
    SearchUICommandHandler * _handlerForCopying;
}

@property (retain) SearchUICommandHandler *handlerForCopying;

- (void).cxx_destruct;
- (id)defaultSymbolName;
- (id)defaultTitle;
- (unsigned long long)destination;
- (id)handlerForCopying;
- (void)performCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 environment:(id)arg3;
- (void)setHandlerForCopying:(id)arg1;

@end
