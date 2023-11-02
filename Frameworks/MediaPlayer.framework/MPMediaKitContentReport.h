
@interface MPMediaKitContentReport : NSObject <NSCopying> {
    NSString * _commentText;
    NSString * _concernItemID;
    long long  _concernItemType;
    NSString * _concernTypeID;
    NSString * _displayText;
    NSString * _parentConcernType;
    NSString * _parentContentID;
    NSString * _userID;
}

@property (nonatomic, copy) NSString *commentText;
@property (nonatomic, copy) NSString *concernItemID;
@property (nonatomic) long long concernItemType;
@property (nonatomic, copy) NSString *concernTypeID;
@property (nonatomic, copy) NSString *displayText;
@property (nonatomic, copy) NSString *parentConcernType;
@property (nonatomic, copy) NSString *parentContentID;
@property (nonatomic, copy) NSString *userID;

- (void).cxx_destruct;
- (id)commentText;
- (id)concernItemID;
- (long long)concernItemType;
- (id)concernTypeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayText;
- (id)parentConcernType;
- (id)parentContentID;
- (void)setCommentText:(id)arg1;
- (void)setConcernItemID:(id)arg1;
- (void)setConcernItemType:(long long)arg1;
- (void)setConcernTypeID:(id)arg1;
- (void)setDisplayText:(id)arg1;
- (void)setParentConcernType:(id)arg1;
- (void)setParentContentID:(id)arg1;
- (void)setUserID:(id)arg1;
- (id)userID;

@end
