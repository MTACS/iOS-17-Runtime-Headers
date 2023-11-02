
@interface _EDUserActionState : NSObject {
    NSString * _cellStyle;
    NSString * _key;
    <ECMessage> * _message;
    NSString * _messageListType;
    bool  _mutedThread;
    long long  _row;
    bool  _scrolledToEnd;
    NSDate * _viewingStarted;
}

@property (nonatomic, copy) NSString *cellStyle;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, retain) <ECMessage> *message;
@property (nonatomic, copy) NSString *messageListType;
@property (nonatomic) bool mutedThread;
@property (nonatomic) long long row;
@property (nonatomic) bool scrolledToEnd;
@property (nonatomic, retain) NSDate *viewingStarted;

- (void).cxx_destruct;
- (id)cellStyle;
- (id)key;
- (id)message;
- (id)messageListType;
- (bool)mutedThread;
- (long long)row;
- (bool)scrolledToEnd;
- (void)setCellStyle:(id)arg1;
- (void)setKey:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessageListType:(id)arg1;
- (void)setMutedThread:(bool)arg1;
- (void)setRow:(long long)arg1;
- (void)setScrolledToEnd:(bool)arg1;
- (void)setViewingStarted:(id)arg1;
- (id)viewingStarted;

@end
