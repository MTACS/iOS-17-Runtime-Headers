
@interface CKStarkConversationController : NSObject <CPInterfaceControllerDelegate> {
    CPListTemplate * _conversationListTemplate;
    NSDateFormatter * _dateFormatter;
    CPInterfaceController * _interfaceController;
    NSDateFormatter * _timeFormatter;
}

@property (nonatomic, retain) CPListTemplate *conversationListTemplate;
@property (nonatomic, retain) NSDateFormatter *dateFormatter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CPInterfaceController *interfaceController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSDateFormatter *timeFormatter;

- (void).cxx_destruct;
- (id)_filterStewieConversation:(id)arg1;
- (void)_resortAndReloadData;
- (void)conversationListDidChange:(id)arg1;
- (id)conversationListTemplate;
- (id)dateFormatter;
- (id)initWithInterfaceController:(id)arg1;
- (id)interfaceController;
- (void)setConversationListTemplate:(id)arg1;
- (void)setDateFormatter:(id)arg1;
- (void)setInterfaceController:(id)arg1;
- (void)setTimeFormatter:(id)arg1;
- (void)templateWillAppear:(id)arg1 animated:(bool)arg2;
- (id)timeFormatter;

@end
