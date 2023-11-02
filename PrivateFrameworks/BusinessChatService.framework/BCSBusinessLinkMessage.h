
@interface BCSBusinessLinkMessage : PBCodable <NSCopying> {
    int  _action;
    NSString * _bundleId;
    NSMutableArray * _businessLinkContents;
    NSMutableArray * _categoryStyleAttributes;
    struct { 
        unsigned int action : 1; 
        unsigned int isPoweredBy : 1; 
    }  _has;
    NSString * _heroImage;
    NSString * _iconImage;
    bool  _isPoweredBy;
    NSString * _link;
    NSString * _muid;
    NSString * _redirectUrl;
}

@property (nonatomic) int action;
@property (nonatomic, retain) NSString *bundleId;
@property (nonatomic, retain) NSMutableArray *businessLinkContents;
@property (nonatomic, retain) NSMutableArray *categoryStyleAttributes;
@property (nonatomic) bool hasAction;
@property (nonatomic, readonly) bool hasBundleId;
@property (nonatomic, readonly) bool hasHeroImage;
@property (nonatomic, readonly) bool hasIconImage;
@property (nonatomic) bool hasIsPoweredBy;
@property (nonatomic, readonly) bool hasLink;
@property (nonatomic, readonly) bool hasMuid;
@property (nonatomic, readonly) bool hasRedirectUrl;
@property (nonatomic, retain) NSString *heroImage;
@property (nonatomic, retain) NSString *iconImage;
@property (nonatomic) bool isPoweredBy;
@property (nonatomic, retain) NSString *link;
@property (nonatomic, retain) NSString *muid;
@property (nonatomic, retain) NSString *redirectUrl;

+ (Class)businessLinkContentsType;
+ (Class)categoryStyleAttributesType;

- (void).cxx_destruct;
- (int)StringAsAction:(id)arg1;
- (int)action;
- (id)actionAsString:(int)arg1;
- (void)addBusinessLinkContents:(id)arg1;
- (void)addCategoryStyleAttributes:(id)arg1;
- (id)bundleId;
- (id)businessLinkContents;
- (id)businessLinkContentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessLinkContentsCount;
- (id)categoryStyleAttributes;
- (id)categoryStyleAttributesAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryStyleAttributesCount;
- (void)clearBusinessLinkContents;
- (void)clearCategoryStyleAttributes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAction;
- (bool)hasBundleId;
- (bool)hasHeroImage;
- (bool)hasIconImage;
- (bool)hasIsPoweredBy;
- (bool)hasLink;
- (bool)hasMuid;
- (bool)hasRedirectUrl;
- (unsigned long long)hash;
- (id)heroImage;
- (id)iconImage;
- (bool)isEqual:(id)arg1;
- (bool)isPoweredBy;
- (id)link;
- (void)mergeFrom:(id)arg1;
- (id)muid;
- (bool)readFrom:(id)arg1;
- (id)redirectUrl;
- (void)setAction:(int)arg1;
- (void)setBundleId:(id)arg1;
- (void)setBusinessLinkContents:(id)arg1;
- (void)setCategoryStyleAttributes:(id)arg1;
- (void)setHasAction:(bool)arg1;
- (void)setHasIsPoweredBy:(bool)arg1;
- (void)setHeroImage:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setIsPoweredBy:(bool)arg1;
- (void)setLink:(id)arg1;
- (void)setMuid:(id)arg1;
- (void)setRedirectUrl:(id)arg1;
- (void)writeTo:(id)arg1;

@end
