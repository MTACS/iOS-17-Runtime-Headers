
@interface IMTapbackSender : NSObject {
    NSAttributedString * _attributedContentString;
    NSString * _backwardCompatibilityString;
    IMChat * _chat;
    NSAttributedString * _messageContent;
    NSString * _messageGUID;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _messagePartRange;
    NSDictionary * _messageSummaryInfo;
    IMTapback * _tapback;
    NSString * _threadIdentifier;
}

@property (nonatomic, readonly) NSAttributedString *attributedContentString;
@property (nonatomic, readonly) NSString *backwardCompatibilityString;
@property (nonatomic, readonly) IMChat *chat;
@property (nonatomic, readonly) NSAttributedString *messageContent;
@property (nonatomic, readonly) NSString *messageGUID;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } messagePartRange;
@property (nonatomic, readonly) NSDictionary *messageSummaryInfo;
@property (nonatomic, readonly) IMTapback *tapback;
@property (nonatomic, readonly) NSString *threadIdentifier;

- (void).cxx_destruct;
- (id)attributedContentString;
- (id)backwardCompatibilityString;
- (id)chat;
- (id)initWithTapback:(id)arg1 chat:(id)arg2 messageGUID:(id)arg3 messagePartRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 messageSummaryInfo:(id)arg5 threadIdentifier:(id)arg6;
- (id)initWithTapback:(id)arg1 chat:(id)arg2 messagePartChatItem:(id)arg3;
- (id)messageContent;
- (id)messageGUID;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })messagePartRange;
- (id)messageSummaryInfo;
- (void)send;
- (id)tapback;
- (id)threadIdentifier;

@end
