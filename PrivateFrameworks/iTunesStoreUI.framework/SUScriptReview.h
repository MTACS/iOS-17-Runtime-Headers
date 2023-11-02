
@interface SUScriptReview : SUScriptObject {
    NSURL * _infoURL;
    SUUIReviewMetadata * _review;
}

@property (readonly) NSNumber *adamID;
@property (retain) NSString *body;
@property (readonly) id hasSavedDraft;
@property (retain) NSString *infoURL;
@property (retain) NSString *itemType;
@property (retain) NSString *nickname;
@property (retain) id nicknameIsConfirmed;
@property (retain) NSNumber *rating;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;

- (id)_className;
- (id)adamID;
- (id)attributeKeys;
- (id)body;
- (id)copyReview;
- (void)dealloc;
- (id)hasSavedDraft;
- (id)infoURL;
- (id)init;
- (id)initWithReview:(id)arg1;
- (id)itemType;
- (id)nickname;
- (id)nicknameIsConfirmed;
- (id)rating;
- (id)removeDraft;
- (id)restoreFromDraft;
- (id)saveAsDraft;
- (id)scriptAttributeKeys;
- (void)setBody:(id)arg1;
- (void)setInfoURL:(id)arg1;
- (void)setItemType:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setNicknameIsConfirmed:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
