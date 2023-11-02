
@interface PKInboxDataSource : NSObject <PKPaymentServiceDelegate> {
    NSMutableArray * _activeInboxMessages;
    unsigned long long  _badgeCount;
    <PKInboxDataSourceDelegate> * _delegate;
    NSMutableArray * _expiredInboxMessages;
    bool  _hasInboxMessages;
    NSMutableArray * _hiddenInboxMessages;
    NSMutableArray * _inboxUpdateCompletionBlocks;
    bool  _inboxVisible;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    PKPaymentService * _paymentService;
    bool  _updatingInbox;
}

@property (nonatomic, readonly) unsigned long long badgeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasInboxMessages;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inboxVisible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accountUserInvitationsCompletion:(id /* block */)arg1;
- (void)_updateInboxMessages;
- (id)activeInboxMessages;
- (unsigned long long)badgeCount;
- (id)expiredInboxMessages;
- (void)featureApplicationAdded:(id)arg1;
- (void)featureApplicationChanged:(id)arg1;
- (void)featureApplicationRemoved:(id)arg1;
- (bool)hasInboxMessages;
- (id)inboxMessageWithIdentifier:(id)arg1;
- (bool)inboxVisible;
- (id)initWithDelegate:(id)arg1;
- (void)updateInboxWithCompletion:(id /* block */)arg1;

@end
