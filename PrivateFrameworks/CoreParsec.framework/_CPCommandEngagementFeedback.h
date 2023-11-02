
@interface _CPCommandEngagementFeedback : PBCodable <NSSecureCoding, _CPCommandEngagementFeedback, _CPProcessableFeedback> {
    NSString * _cardSectionId;
    NSString * _commandDetail;
    int  _commandType;
    int  _contactActionType;
    bool  _didDisplayHandleOptions;
    bool  _didSelectFromOptionsMenu;
    _CPSearchResultForFeedback * _result;
    NSString * _resultSectionId;
    unsigned long long  _timestamp;
    int  _triggerEvent;
    unsigned long long  _uniqueButtonId;
}

@property (nonatomic, copy) NSString *cardSectionId;
@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic) int commandType;
@property (nonatomic) int contactActionType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didDisplayHandleOptions;
@property (nonatomic) bool didSelectFromOptionsMenu;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) _CPSearchResultForFeedback *result;
@property (nonatomic, copy) NSString *resultSectionId;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;
@property (nonatomic) unsigned long long uniqueButtonId;

- (void).cxx_destruct;
- (id)cardSectionId;
- (id)commandDetail;
- (int)commandType;
- (int)contactActionType;
- (bool)didDisplayHandleOptions;
- (bool)didSelectFromOptionsMenu;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)result;
- (id)resultSectionId;
- (void)setCardSectionId:(id)arg1;
- (void)setCommandDetail:(id)arg1;
- (void)setCommandType:(int)arg1;
- (void)setContactActionType:(int)arg1;
- (void)setDidDisplayHandleOptions:(bool)arg1;
- (void)setDidSelectFromOptionsMenu:(bool)arg1;
- (void)setResult:(id)arg1;
- (void)setResultSectionId:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUniqueButtonId:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (unsigned long long)uniqueButtonId;
- (void)writeTo:(id)arg1;

@end
