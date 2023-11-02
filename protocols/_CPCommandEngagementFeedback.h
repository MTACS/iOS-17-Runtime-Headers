
@protocol _CPCommandEngagementFeedback <NSObject>

@required

- (NSString *)cardSectionId;
- (NSString *)commandDetail;
- (int)commandType;
- (int)contactActionType;
- (bool)didDisplayHandleOptions;
- (bool)didSelectFromOptionsMenu;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (_CPSearchResultForFeedback *)result;
- (NSString *)resultSectionId;
- (void)setCardSectionId:(NSString *)arg1;
- (void)setCommandDetail:(NSString *)arg1;
- (void)setCommandType:(int)arg1;
- (void)setContactActionType:(int)arg1;
- (void)setDidDisplayHandleOptions:(bool)arg1;
- (void)setDidSelectFromOptionsMenu:(bool)arg1;
- (void)setResult:(_CPSearchResultForFeedback *)arg1;
- (void)setResultSectionId:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUniqueButtonId:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (unsigned long long)uniqueButtonId;

@end
