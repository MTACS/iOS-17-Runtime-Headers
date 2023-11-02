
@interface PKMentionItem : PKDetectionItem

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) NSString *mentionResult;
@property (nonatomic, readonly) NSUUID *mentionUUID;

+ (id)mentionItemWithQueryItem:(id)arg1 sessionManager:(id)arg2;

- (id)_actionNameForActivation:(bool)arg1;
- (id)_baselinePath;
- (bool)active;
- (void)clearActiveInDrawing:(id)arg1;
- (id)description;
- (void)invalidateUUID;
- (bool)isEqual:(id)arg1;
- (id)mentionResult;
- (id)mentionUUID;
- (id)setActive:(bool)arg1;
- (id)strokeColor;

@end
