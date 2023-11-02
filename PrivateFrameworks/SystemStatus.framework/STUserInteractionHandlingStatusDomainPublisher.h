
@interface STUserInteractionHandlingStatusDomainPublisher : STStatusDomainPublisher {
    id /* block */  _userInteractionHandlerBlock;
}

- (void).cxx_destruct;
- (void)handleUserInteraction:(id)arg1 forDomain:(unsigned long long)arg2;
- (void)handleUserInteractionsWithBlock:(id /* block */)arg1;

@end
