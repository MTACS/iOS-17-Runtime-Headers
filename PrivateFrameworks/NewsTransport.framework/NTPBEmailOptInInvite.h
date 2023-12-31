
@interface NTPBEmailOptInInvite : PBCodable <NSCopying> {
    NSString * _articleId;
    int  _emailOptInInviteLocation;
    struct { 
        unsigned int emailOptInInviteLocation : 1; 
        unsigned int newsletterSubscriptionType : 1; 
        unsigned int parentFeedType : 1; 
        unsigned int userAction : 1; 
    }  _has;
    int  _newsletterSubscriptionType;
    NSString * _parentFeedId;
    int  _parentFeedType;
    int  _userAction;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) int emailOptInInviteLocation;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasEmailOptInInviteLocation;
@property (nonatomic) bool hasNewsletterSubscriptionType;
@property (nonatomic, readonly) bool hasParentFeedId;
@property (nonatomic) bool hasParentFeedType;
@property (nonatomic) bool hasUserAction;
@property (nonatomic) int newsletterSubscriptionType;
@property (nonatomic, retain) NSString *parentFeedId;
@property (nonatomic) int parentFeedType;
@property (nonatomic) int userAction;

- (void).cxx_destruct;
- (int)StringAsParentFeedType:(id)arg1;
- (id)articleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)emailOptInInviteLocation;
- (bool)hasArticleId;
- (bool)hasEmailOptInInviteLocation;
- (bool)hasNewsletterSubscriptionType;
- (bool)hasParentFeedId;
- (bool)hasParentFeedType;
- (bool)hasUserAction;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)newsletterSubscriptionType;
- (id)parentFeedId;
- (int)parentFeedType;
- (id)parentFeedTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setEmailOptInInviteLocation:(int)arg1;
- (void)setHasEmailOptInInviteLocation:(bool)arg1;
- (void)setHasNewsletterSubscriptionType:(bool)arg1;
- (void)setHasParentFeedType:(bool)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setNewsletterSubscriptionType:(int)arg1;
- (void)setParentFeedId:(id)arg1;
- (void)setParentFeedType:(int)arg1;
- (void)setUserAction:(int)arg1;
- (int)userAction;
- (void)writeTo:(id)arg1;

@end
