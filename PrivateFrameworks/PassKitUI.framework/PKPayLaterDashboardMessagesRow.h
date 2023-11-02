
@interface PKPayLaterDashboardMessagesRow : NSObject <PKPayLaterCollectionViewRow> {
    long long  _currentMessageIndex;
    NSOrderedSet * _messages;
    <PKDashboardMessagesViewDelegate> * _messagesViewDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithMessages:(id)arg1 currentMessageIndex:(long long)arg2 messagesViewDelegate:(id)arg3;
- (bool)isEqual:(id)arg1;

@end
