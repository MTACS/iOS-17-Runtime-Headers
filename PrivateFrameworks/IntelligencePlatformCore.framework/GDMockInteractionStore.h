
@interface GDMockInteractionStore : NSObject {
    NSArray * _interactions;
}

- (void).cxx_destruct;
- (id)cdStore;
- (id)initWithInteractions:(id)arg1;
- (id)queryInteractionsUsingPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 error:(id*)arg5;

@end
