
@interface EDMessageQueryEvaluator : NSObject <EFLoggable> {
    EMMailboxScope * _mailboxScope;
    EDMessagePersistence * _messagePersistence;
    EMQuery * _messageQuery;
    NSCache * _spotlightPredicateCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) EMMailboxScope *mailboxScope;
@property (nonatomic, readonly) EDMessagePersistence *messagePersistence;
@property (nonatomic, readonly) EMQuery *messageQuery;
@property (nonatomic, retain) NSCache *spotlightPredicateCache;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (id)filterMessages:(id)arg1 unmatchedMessages:(id*)arg2;
- (id)initWithQuery:(id)arg1 messagePersistence:(id)arg2;
- (id)mailboxScope;
- (id)messagePersistence;
- (id)messageQuery;
- (void)setSpotlightPredicateCache:(id)arg1;
- (id)spotlightPredicateCache;
- (id)transformAndFilterMessages:(id)arg1;
- (id)transformAndFilterMessages:(id)arg1 includeDeleted:(bool)arg2;
- (id)transformMessages:(id)arg1;
- (id)transformMessages:(id)arg1 includeDeleted:(bool)arg2;

@end
