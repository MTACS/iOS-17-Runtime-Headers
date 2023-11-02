
@interface MessageContentRepresentationRequest : NSObject <EFCancelable, EFLoggable, EFPubliclyDescribable, EFSignpostable> {
    EFCancelationToken * _cancelationToken;
    EFObservable * _contentObservable;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _contentRepresentationLock;
    NSString * _contentRepresentationType;
    <EMContentItemRequestDelegate> * _delegate;
    EFFuture * _futureContentRepresentation;
    _Atomic bool  _hasError;
    bool  _includeSuggestionItems;
    EFObservable<EFObserver> * _inputObservable;
    <EMCollectionItemID> * _itemID;
    EFFuture * _messageFuture;
    unsigned long long  _retyAttempt;
}

@property (nonatomic, readonly) EFFuture *contentRepresentationFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (readonly) bool hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly) bool isFinished;
@property (nonatomic, readonly) <EMCollectionItemID> *itemID;
@property (nonatomic, readonly) EMMessage *message;
@property (nonatomic, readonly) EFFuture *messageFuture;
@property (readonly) unsigned long long signpostID;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;

+ (id)log;
+ (id)signpostLog;

- (void).cxx_destruct;
- (id)addLoadObserver:(id /* block */)arg1;
- (void)cancel;
- (id)contentRepresentationFuture;
- (void)dealloc;
- (id)description;
- (id)ef_publicDescription;
- (bool)hasStarted;
- (id)initWithMessage:(id)arg1;
- (id)initWithMessage:(id)arg1 includeSuggestions:(long long)arg2;
- (id)initWithMessage:(id)arg1 includeSuggestions:(long long)arg2 representationType:(id)arg3 delegate:(id)arg4;
- (id)initWithMessageList:(id)arg1 itemIdentifier:(id)arg2 includeSuggestions:(long long)arg3;
- (id)initWithMessageList:(id)arg1 itemIdentifier:(id)arg2 includeSuggestions:(long long)arg3 representationType:(id)arg4 delegate:(id)arg5;
- (bool)isFinished;
- (id)itemID;
- (id)message;
- (id)messageFuture;
- (id)onScheduler:(id)arg1 addLoadObserver:(id /* block */)arg2;
- (id)resultIfAvailable;
- (void)retry;
- (unsigned long long)signpostID;
- (void)start;
- (unsigned long long)state;
- (void)updateItemID:(id)arg1 messageList:(id)arg2;
- (id)waitForResult;

@end
