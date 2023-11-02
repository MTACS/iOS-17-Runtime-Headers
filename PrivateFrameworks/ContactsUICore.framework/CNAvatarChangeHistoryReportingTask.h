
@interface CNAvatarChangeHistoryReportingTask : CNTask {
    <CNAvatarCacheChangeListenerDelegate> * _delegate;
    NSArray * _identifiers;
}

@property (nonatomic, readonly) <CNAvatarCacheChangeListenerDelegate> *delegate;
@property (nonatomic, readonly, copy) NSArray *identifiers;

- (void).cxx_destruct;
- (id)delegate;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1 delegate:(id)arg2;
- (id)run:(id*)arg1;

@end
