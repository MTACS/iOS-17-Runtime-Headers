
@interface PKHashtagItem : PKDetectionItem

@property (nonatomic, readonly) bool active;
@property (nonatomic, readonly) NSString *hashtagResult;
@property (nonatomic, readonly) NSUUID *hashtagUUID;

+ (id)hashtagItemWithQueryItem:(id)arg1 sessionManager:(id)arg2;

- (id)_actionNameForActivation:(bool)arg1;
- (id)_baselinePath;
- (bool)active;
- (void)clearActiveInDrawing:(id)arg1;
- (id)description;
- (id)hashtagResult;
- (id)hashtagUUID;
- (void)invalidateUUID;
- (bool)isEqual:(id)arg1;
- (id)setActive:(bool)arg1;
- (id)strokeColor;

@end
