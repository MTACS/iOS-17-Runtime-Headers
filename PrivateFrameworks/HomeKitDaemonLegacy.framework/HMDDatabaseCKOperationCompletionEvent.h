
@interface HMDDatabaseCKOperationCompletionEvent : HMMLogEvent {
    NSString * _containerIdentifier;
}

@property (readonly, copy) NSString *containerIdentifier;

- (void).cxx_destruct;
- (id)containerIdentifier;
- (id)initWithContainerIdentifier:(id)arg1;

@end
