
@interface IMMessageRetractionChatItem : IMTranscriptChatItem {
    bool  _isFailedRetraction;
    bool  _isFromMe;
    long long  _partIndex;
    NSArray * _retractionUnsupportedByHandles;
    IMHandle * _sender;
}

@property (nonatomic, readonly) bool canRetryFailedRetraction;
@property (nonatomic, readonly) bool isFailedRetraction;
@property (nonatomic, readonly) bool isFromMe;
@property (nonatomic, readonly) IMMessage *message;
@property (nonatomic, readonly, copy) NSString *messageGUID;
@property (nonatomic, readonly) IMMessageItem *messageItem;
@property (nonatomic, readonly) long long partIndex;
@property (nonatomic, readonly) unsigned long long replyCount;
@property (nonatomic, readonly, copy) NSArray *retractionUnsupportedByHandles;
@property (nonatomic, readonly, copy) IMHandle *sender;
@property (nonatomic, readonly, copy) NSString *threadIdentifier;

// Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore

- (void).cxx_destruct;
- (id)_initWithItem:(id)arg1 partIndex:(long long)arg2 isFailedRetraction:(bool)arg3 retractionUnsupportedByHandles:(id)arg4 sender:(id)arg5 isFromMe:(bool)arg6;
- (id)_retractedMessageItem;
- (bool)canDelete;
- (bool)canRetryFailedRetraction;
- (bool)isFailedRetraction;
- (bool)isFromMe;
- (id)message;
- (id)messageGUID;
- (id)messageItem;
- (long long)partIndex;
- (unsigned long long)replyCount;
- (id)retractionUnsupportedByHandles;
- (id)sender;
- (id)threadIdentifier;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (Class)__ck_chatItemClass;

@end
