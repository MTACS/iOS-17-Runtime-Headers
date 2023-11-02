
@interface EDUserNotificationMailboxCutoffController : NSObject <EFLoggable> {
    NSMutableDictionary * _mailboxCutoffs;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *mailboxCutoffs;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_initializeIfNeeded;
- (void)_readFromDefaults;
- (bool)_shouldUpdateCutoffForMessage:(id)arg1;
- (bool)_updateCutoffForMailbox:(id)arg1 date:(id)arg2;
- (void)_writeToDefaults;
- (void)clearCutoffForMailbox:(id)arg1;
- (id)cutoffDateForMailbox:(id)arg1;
- (bool)isMessageAboveMailboxCutoff:(id)arg1;
- (id)mailboxCutoffs;
- (void)setMailboxCutoffs:(id)arg1;
- (void)updateCutoffForMailboxesWithMessages:(id)arg1;

@end
