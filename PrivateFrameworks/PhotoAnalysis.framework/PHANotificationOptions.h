
@interface PHANotificationOptions : NSObject {
    NSString * _bodyText;
    NSString * _collectionUUID;
    NSDate * _deliveryDate;
    NSDate * _expirationDate;
    PHAsset * _keyAsset;
    NSString * _subtitle;
    NSString * _title;
    unsigned char  _type;
    NSDictionary * _userInfo;
}

@property (nonatomic, retain) NSString *bodyText;
@property (nonatomic, retain) NSString *collectionUUID;
@property (nonatomic, retain) NSDate *deliveryDate;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) PHAsset *keyAsset;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) unsigned char type;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (id)stringFromNotificationType:(unsigned char)arg1;

- (void).cxx_destruct;
- (id)bodyText;
- (id)collectionUUID;
- (id)deliveryDate;
- (id)description;
- (id)expirationDate;
- (id)initWithType:(unsigned char)arg1;
- (id)keyAsset;
- (void)setBodyText:(id)arg1;
- (void)setCollectionUUID:(id)arg1;
- (void)setDeliveryDate:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)subtitle;
- (id)title;
- (unsigned char)type;
- (id)userInfo;

@end
