
@interface PKDashboardMessageRowItem : NSObject <PKIdentifiable> {
    long long  _currentMessageIndex;
    NSOrderedSet * _messages;
    <PKDashboardMessagesViewDelegate> * _messagesViewDelegate;
}

@property (nonatomic) long long currentMessageIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) NSOrderedSet *messages;
@property (nonatomic, readonly) <PKDashboardMessagesViewDelegate> *messagesViewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)currentMessageIndex;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithMessages:(id)arg1 currentMessageIndex:(long long)arg2 messagesViewDelegate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)messages;
- (id)messagesViewDelegate;
- (void)setCurrentMessageIndex:(long long)arg1;
- (void)setMessages:(id)arg1;

@end
