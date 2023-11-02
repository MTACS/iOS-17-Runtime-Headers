
@interface _INPBWorkoutAssociatedItem : PBCodable <NSCopying, NSSecureCoding, _INPBWorkoutAssociatedItem> {
    int  _contentRating;
    struct { 
        unsigned int contentRating : 1; 
        unsigned int itemLabel : 1; 
    }  _has;
    NSString * _itemID;
    int  _itemLabel;
    _INPBDataString * _itemName;
}

@property (nonatomic) int contentRating;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasContentRating;
@property (nonatomic, readonly) bool hasItemID;
@property (nonatomic) bool hasItemLabel;
@property (nonatomic, readonly) bool hasItemName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *itemID;
@property (nonatomic) int itemLabel;
@property (nonatomic, retain) _INPBDataString *itemName;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (int)StringAsContentRating:(id)arg1;
- (int)StringAsItemLabel:(id)arg1;
- (int)contentRating;
- (id)contentRatingAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasContentRating;
- (bool)hasItemID;
- (bool)hasItemLabel;
- (bool)hasItemName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemID;
- (int)itemLabel;
- (id)itemLabelAsString:(int)arg1;
- (id)itemName;
- (bool)readFrom:(id)arg1;
- (void)setContentRating:(int)arg1;
- (void)setHasContentRating:(bool)arg1;
- (void)setHasItemLabel:(bool)arg1;
- (void)setItemID:(id)arg1;
- (void)setItemLabel:(int)arg1;
- (void)setItemName:(id)arg1;
- (void)writeTo:(id)arg1;

@end
