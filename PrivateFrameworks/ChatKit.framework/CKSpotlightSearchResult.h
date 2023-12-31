
@interface CKSpotlightSearchResult : NSObject {
    NSString * _chatGUID;
    NSDate * _messageDate;
    NSString * _messageGUID;
    NSString * _summary;
}

@property (nonatomic, copy) NSString *chatGUID;
@property (nonatomic, retain) NSDate *messageDate;
@property (nonatomic, copy) NSString *messageGUID;
@property (nonatomic, copy) NSString *summary;

- (void).cxx_destruct;
- (id)chatGUID;
- (long long)compare:(id)arg1;
- (id)initWithMessageGUID:(id)arg1 chatGUID:(id)arg2 messageTime:(id)arg3 summery:(id)arg4;
- (id)messageDate;
- (id)messageGUID;
- (void)setChatGUID:(id)arg1;
- (void)setMessageDate:(id)arg1;
- (void)setMessageGUID:(id)arg1;
- (void)setSummary:(id)arg1;
- (id)summary;

@end
