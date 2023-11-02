
@interface ICActivityStreamSelection : NSObject <NSCopying> {
    NSDate * _displayDate;
    ICTTTextEditFilter * _filter;
    NSSet * _itemIDs;
}

@property (nonatomic, copy) NSDate *displayDate;
@property (nonatomic, readonly, copy) NSData *encodedData;
@property (nonatomic, copy) ICTTTextEditFilter *filter;
@property (nonatomic, copy) NSSet *itemIDs;

+ (id)objc_selectionFromData:(id)arg1;
+ (id)selectionFromData:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)displayDate;
- (id)encodedData;
- (id)filter;
- (unsigned long long)hash;
- (id)initWithFilter:(id)arg1 displayDate:(id)arg2;
- (id)initWithItemIDs:(id)arg1 filter:(id)arg2 displayDate:(id)arg3;
- (id)initWithMentions:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)itemIDs;
- (id)objc_encodedData;
- (id)objc_initWithMentions:(id)arg1;
- (void)setDisplayDate:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setItemIDs:(id)arg1;

@end
