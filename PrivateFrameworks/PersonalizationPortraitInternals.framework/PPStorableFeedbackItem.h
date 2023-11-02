
@interface PPStorableFeedbackItem : PBCodable <NSCopying> {
    unsigned int  _feedbackType;
    struct { 
        unsigned int feedbackType : 1; 
    }  _has;
    NSString * _itemString;
}

@property (nonatomic) unsigned int feedbackType;
@property (nonatomic) bool hasFeedbackType;
@property (nonatomic, readonly) bool hasItemString;
@property (nonatomic, retain) NSString *itemString;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)feedbackType;
- (bool)hasFeedbackType;
- (bool)hasItemString;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)itemString;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackType:(unsigned int)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setItemString:(id)arg1;
- (void)writeTo:(id)arg1;

@end
