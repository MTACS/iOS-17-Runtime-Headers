
@interface SYPBContentItem : PBCodable <NSCopying> {
    NSString * _displayTitle;
    struct { 
        unsigned int previewLoadLevel : 1; 
    }  _has;
    NSData * _itemIdentifierData;
    NSString * _itemURL;
    NSData * _linkPreviewMetadata;
    long long  _previewLoadLevel;
    NSString * _sourceIdentifier;
    NSString * _sourceLastKnownName;
    NSData * _userActivityData;
}

@property (nonatomic, retain) NSString *displayTitle;
@property (nonatomic, readonly) bool hasDisplayTitle;
@property (nonatomic, readonly) bool hasItemURL;
@property (nonatomic, readonly) bool hasLinkPreviewMetadata;
@property (nonatomic) bool hasPreviewLoadLevel;
@property (nonatomic, readonly) bool hasSourceIdentifier;
@property (nonatomic, readonly) bool hasSourceLastKnownName;
@property (nonatomic, readonly) bool hasUserActivityData;
@property (nonatomic, retain) NSData *itemIdentifierData;
@property (nonatomic, retain) NSString *itemURL;
@property (nonatomic, retain) NSData *linkPreviewMetadata;
@property (nonatomic) long long previewLoadLevel;
@property (nonatomic, retain) NSString *sourceIdentifier;
@property (nonatomic, retain) NSString *sourceLastKnownName;
@property (nonatomic, retain) NSData *userActivityData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayTitle;
- (bool)hasDisplayTitle;
- (bool)hasItemURL;
- (bool)hasLinkPreviewMetadata;
- (bool)hasPreviewLoadLevel;
- (bool)hasSourceIdentifier;
- (bool)hasSourceLastKnownName;
- (bool)hasUserActivityData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifierData;
- (id)itemURL;
- (id)linkPreviewMetadata;
- (void)mergeFrom:(id)arg1;
- (long long)previewLoadLevel;
- (bool)readFrom:(id)arg1;
- (void)setDisplayTitle:(id)arg1;
- (void)setHasPreviewLoadLevel:(bool)arg1;
- (void)setItemIdentifierData:(id)arg1;
- (void)setItemURL:(id)arg1;
- (void)setLinkPreviewMetadata:(id)arg1;
- (void)setPreviewLoadLevel:(long long)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setSourceLastKnownName:(id)arg1;
- (void)setUserActivityData:(id)arg1;
- (id)sourceIdentifier;
- (id)sourceLastKnownName;
- (id)userActivityData;
- (void)writeTo:(id)arg1;

@end
