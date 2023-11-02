
@interface CKCommunicationSafetyEDUScreenOne : CKCommunicationSafetyEDUScreen {
    CKComposition * _composition;
    <CKCommunicationSafetyEDUScreenProtocol> * _delegate;
    NSArray * _identifiersOfShelvedImages;
    NSIndexPath * _indexPath;
    bool  _isSending;
    bool  _isYoungAgeGroup;
    NSSet * _sensitiveMediaObjects;
}

@property (nonatomic, readonly) CKComposition *composition;
@property (nonatomic) <CKCommunicationSafetyEDUScreenProtocol> *delegate;
@property (nonatomic, readonly) NSArray *identifiersOfShelvedImages;
@property (nonatomic, readonly) NSIndexPath *indexPath;
@property (nonatomic, readonly) bool isSending;
@property (nonatomic, readonly) bool isYoungAgeGroup;
@property (nonatomic, readonly) NSSet *sensitiveMediaObjects;

- (void).cxx_destruct;
- (void)_acceptButtonPressed;
- (void)_messageButtonPressed;
- (void)_notNowButtonPressed;
- (void)addButtonsToTray;
- (id)composition;
- (void)configureFirstReceiveScreen;
- (void)configureFirstSendScreen;
- (id)delegate;
- (id)identifiersOfShelvedImages;
- (id)indexPath;
- (id)initFirstReceivingEDUScreenWithItemIndexPath:(id)arg1;
- (id)initFirstSendingEDUScreenWithComposition:(id)arg1 withSensitiveMediaObjects:(id)arg2 withIdentifiersOfShelvedImages:(id)arg3;
- (bool)isSending;
- (bool)isYoungAgeGroup;
- (id)sensitiveMediaObjects;
- (void)setDelegate:(id)arg1;

@end
