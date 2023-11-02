
@interface EMInteractionLogger : NSObject <EFLoggable> {
    bool  _appLaunched;
    EMRemoteConnection * _connection;
    NSMutableDictionary * _messageListMessages;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _messageListVisibleRows;
    NSObject<OS_dispatch_queue> * _stateTrackingQueue;
    NSMutableDictionary * _viewedMessages;
}

@property bool appLaunched;
@property (retain) EMRemoteConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *messageListMessages;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } messageListVisibleRows;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *stateTrackingQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *viewedMessages;

+ (id)log;
+ (id)remoteInterface;

- (void).cxx_destruct;
- (void)_appDidEnterBackground;
- (void)_appWillEnterForeground;
- (void)_logMessageListDisplayEndedForState:(id)arg1 now:(id)arg2;
- (void)_logMessageListDisplayStartedMessageID:(id)arg1 now:(id)arg2 type:(id)arg3 row:(long long)arg4 cellStyle:(id)arg5;
- (id)_rescopedMessageObjectID:(id)arg1;
- (id)_stateForObjectID:(id)arg1 container:(id)arg2;
- (void)_viewingEndedForAllMessages;
- (void)_xpcLogEvent:(id)arg1 date:(id)arg2 data:(id)arg3;
- (void)_xpcLogEvent:(id)arg1 date:(id)arg2 messageID:(id)arg3 data:(id)arg4;
- (bool)appLaunched;
- (void)applicationLaunched;
- (void)clickedLinkInMessage:(id)arg1 scheme:(id)arg2;
- (void)composeFowardStartedForMessage:(id)arg1;
- (void)composeReplyStartedForMessage:(id)arg1;
- (id)connection;
- (id)initWithRemoteConnection:(id)arg1;
- (void)messageListDisplayEndedForAllListItems;
- (void)messageListDisplayEndedForListItem:(id)arg1 cellStyle:(id)arg2;
- (void)messageListDisplayStartedForListItem:(id)arg1 messageListType:(id)arg2 row:(long long)arg3 cellStyle:(id)arg4;
- (id)messageListMessages;
- (id)messageListTypeForMailboxes:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messageListVisibleRows;
- (void)scrolledToEndOfMessage:(id)arg1;
- (void)setAppLaunched:(bool)arg1;
- (void)setConnection:(id)arg1;
- (void)setMessageListMessages:(id)arg1;
- (void)setMessageListVisibleRows:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setStateTrackingQueue:(id)arg1;
- (void)setViewedMessages:(id)arg1;
- (id)stateTrackingQueue;
- (id)viewedMessages;
- (void)viewingEndedForMessage:(id)arg1;
- (void)viewingStartedForMessage:(id)arg1 messageListScope:(id)arg2;

@end
