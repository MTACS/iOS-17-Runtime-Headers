
@interface IMMessagePartHistoricalContent : NSObject {
    NSString * _backwardCompatibleMessageGUID;
    NSDate * _dateSent;
    NSAttributedString * _messagePartText;
}

@property (nonatomic, retain) NSString *backwardCompatibleMessageGUID;
@property (nonatomic, retain) NSDate *dateSent;
@property (nonatomic, retain) NSAttributedString *messagePartText;

- (void).cxx_destruct;
- (id)backwardCompatibleMessageGUID;
- (id)dateSent;
- (id)description;
- (id)initWithMessagePartText:(id)arg1 dateSent:(id)arg2 backwardCompatibleMessageGUID:(id)arg3;
- (id)initWithMessageSummaryInfoDictionary:(id)arg1;
- (id)messagePartText;
- (id)messageSummaryInfoDictionaryRepresentation;
- (void)setBackwardCompatibleMessageGUID:(id)arg1;
- (void)setDateSent:(id)arg1;
- (void)setMessagePartText:(id)arg1;

@end
