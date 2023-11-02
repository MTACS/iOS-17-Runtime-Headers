
@interface NPKProtoStandalonePaymentProvisioningFlowPickerSection : PBCodable <NSCopying> {
    NSString * _footer;
    NSMutableArray * _items;
    NSString * _title;
}

@property (nonatomic, retain) NSString *footer;
@property (nonatomic, readonly) bool hasFooter;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic, retain) NSMutableArray *items;
@property (nonatomic, retain) NSString *title;

+ (Class)itemsType;

- (void).cxx_destruct;
- (void)addItems:(id)arg1;
- (void)clearItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)footer;
- (bool)hasFooter;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)items;
- (id)itemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFooter:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)writeTo:(id)arg1;

@end
