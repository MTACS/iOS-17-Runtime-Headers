
@interface BMPBSocialHighlightFeedbackEvent : PBCodable <NSCopying> {
    NSString * _clientIdentifier;
    NSString * _clientVariant;
    double  _feedbackCreationSecondsSinceReferenceDate;
    int  _feedbackType;
    struct { 
        unsigned int feedbackCreationSecondsSinceReferenceDate : 1; 
        unsigned int feedbackType : 1; 
    }  _has;
    BMPBRankableSocialHighlight * _highlight;
}

@property (nonatomic, retain) NSString *clientIdentifier;
@property (nonatomic, retain) NSString *clientVariant;
@property (nonatomic) double feedbackCreationSecondsSinceReferenceDate;
@property (nonatomic) int feedbackType;
@property (nonatomic, readonly) bool hasClientIdentifier;
@property (nonatomic, readonly) bool hasClientVariant;
@property (nonatomic) bool hasFeedbackCreationSecondsSinceReferenceDate;
@property (nonatomic) bool hasFeedbackType;
@property (nonatomic, readonly) bool hasHighlight;
@property (nonatomic, retain) BMPBRankableSocialHighlight *highlight;

- (void).cxx_destruct;
- (int)StringAsFeedbackType:(id)arg1;
- (id)clientIdentifier;
- (id)clientVariant;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)feedbackCreationSecondsSinceReferenceDate;
- (int)feedbackType;
- (id)feedbackTypeAsString:(int)arg1;
- (bool)hasClientIdentifier;
- (bool)hasClientVariant;
- (bool)hasFeedbackCreationSecondsSinceReferenceDate;
- (bool)hasFeedbackType;
- (bool)hasHighlight;
- (unsigned long long)hash;
- (id)highlight;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientVariant:(id)arg1;
- (void)setFeedbackCreationSecondsSinceReferenceDate:(double)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasFeedbackCreationSecondsSinceReferenceDate:(bool)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setHighlight:(id)arg1;
- (void)writeTo:(id)arg1;

@end
