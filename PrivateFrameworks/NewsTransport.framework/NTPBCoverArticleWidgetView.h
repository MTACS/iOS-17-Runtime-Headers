
@interface NTPBCoverArticleWidgetView : PBCodable <NSCopying> {
    int  _coverArticleWidgetArticleCount;
    NSData * _coverArticleWidgetViewingSessionId;
    struct { 
        unsigned int coverArticleWidgetArticleCount : 1; 
    }  _has;
}

@property (nonatomic) int coverArticleWidgetArticleCount;
@property (nonatomic, retain) NSData *coverArticleWidgetViewingSessionId;
@property (nonatomic) bool hasCoverArticleWidgetArticleCount;
@property (nonatomic, readonly) bool hasCoverArticleWidgetViewingSessionId;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)coverArticleWidgetArticleCount;
- (id)coverArticleWidgetViewingSessionId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCoverArticleWidgetArticleCount;
- (bool)hasCoverArticleWidgetViewingSessionId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCoverArticleWidgetArticleCount:(int)arg1;
- (void)setCoverArticleWidgetViewingSessionId:(id)arg1;
- (void)setHasCoverArticleWidgetArticleCount:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
