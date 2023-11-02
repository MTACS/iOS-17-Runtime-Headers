
@interface PPPBFeedbackItem : PBCodable <NSCopying> {
    int  _feedbackType;
    struct { 
        unsigned int feedbackType : 1; 
    }  _has;
}

@property (nonatomic) int feedbackType;
@property (nonatomic) bool hasFeedbackType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackType;
- (bool)hasFeedbackType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
