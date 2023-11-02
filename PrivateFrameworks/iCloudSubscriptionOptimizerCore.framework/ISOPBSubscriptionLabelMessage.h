
@interface ISOPBSubscriptionLabelMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int minsUntilICloudNotificationOpened : 1; 
        unsigned int label : 1; 
    }  _has;
    int  _label;
    long long  _minsUntilICloudNotificationOpened;
}

@property (nonatomic) bool hasLabel;
@property (nonatomic) bool hasMinsUntilICloudNotificationOpened;
@property (nonatomic) int label;
@property (nonatomic) long long minsUntilICloudNotificationOpened;

- (int)StringAsLabel:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasMinsUntilICloudNotificationOpened;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)label;
- (id)labelAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)minsUntilICloudNotificationOpened;
- (bool)readFrom:(id)arg1;
- (void)setHasLabel:(bool)arg1;
- (void)setHasMinsUntilICloudNotificationOpened:(bool)arg1;
- (void)setLabel:(int)arg1;
- (void)setMinsUntilICloudNotificationOpened:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
