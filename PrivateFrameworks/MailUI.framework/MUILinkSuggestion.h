
@interface MUILinkSuggestion : MUIResultSuggestion {
    NSString * _messageID;
    NSString * _richLinkID;
    NSString * _title;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *messageID;
@property (nonatomic, readonly) NSString *richLinkID;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *url;

+ (id)suggestionWithURL:(id)arg1 title:(id)arg2 richLinkID:(id)arg3 authors:(id)arg4 authorEmailAddresses:(id)arg5 objectID:(id)arg6 messageID:(id)arg7 messageList:(id)arg8;

- (void).cxx_destruct;
- (id)category;
- (id)description;
- (id)initWithURL:(id)arg1 title:(id)arg2 richLinkID:(id)arg3 authors:(id)arg4 authorEmailAddresses:(id)arg5 objectID:(id)arg6 messageID:(id)arg7 messageList:(id)arg8;
- (id)messageID;
- (id)richLinkID;
- (id)title;
- (id)url;

@end
