
@protocol _INPBWorkoutAssociatedItem <NSObject>

@required

- (int)StringAsContentRating:(NSString *)arg1;
- (int)StringAsItemLabel:(NSString *)arg1;
- (int)contentRating;
- (NSString *)contentRatingAsString:(int)arg1;
- (bool)hasContentRating;
- (bool)hasItemID;
- (bool)hasItemLabel;
- (bool)hasItemName;
- (NSString *)itemID;
- (int)itemLabel;
- (NSString *)itemLabelAsString:(int)arg1;
- (_INPBDataString *)itemName;
- (void)setContentRating:(int)arg1;
- (void)setHasContentRating:(bool)arg1;
- (void)setHasItemLabel:(bool)arg1;
- (void)setItemID:(NSString *)arg1;
- (void)setItemLabel:(int)arg1;
- (void)setItemName:(_INPBDataString *)arg1;

@end
