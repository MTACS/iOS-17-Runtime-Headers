
@interface BMAskToBuyEvent : BMEventBase <BMProtoBufWrapper, BMStoreData> {
    NSString * _actionUserID;
    double  _eventTime;
    bool  _isActionUserDevice;
    NSString * _itemAgeRating;
    NSString * _itemDescription;
    NSString * _itemLocalizedPrice;
    NSNumber * _itemStarRating;
    NSString * _itemTitle;
    NSString * _productType;
    NSString * _requestID;
    int  _status;
    NSString * _storeLink;
    NSString * _thumbnailPath;
    NSString * _userID;
}

@property (nonatomic, copy) NSString *actionUserID;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double eventTime;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isActionUserDevice;
@property (nonatomic, copy) NSString *itemAgeRating;
@property (nonatomic, copy) NSString *itemDescription;
@property (nonatomic, copy) NSString *itemLocalizedPrice;
@property (nonatomic, copy) NSNumber *itemStarRating;
@property (nonatomic, copy) NSString *itemTitle;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, copy) NSString *requestID;
@property (nonatomic) int status;
@property (nonatomic, copy) NSString *storeLink;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *thumbnailPath;
@property (nonatomic, copy) NSString *userID;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)new;

- (void).cxx_destruct;
- (id)actionUserID;
- (unsigned int)dataVersion;
- (id)encodeAsProto;
- (double)eventTime;
- (unsigned long long)hash;
- (id)init;
- (id)initWithProto:(id)arg1;
- (id)initWithProtoData:(id)arg1;
- (id)initWithRequestID:(id)arg1 status:(int)arg2 eventTime:(double)arg3 userID:(id)arg4 actionUserID:(id)arg5 itemTitle:(id)arg6 itemDescription:(id)arg7 itemLocalizedPrice:(id)arg8 thumbnailPath:(id)arg9 ageRating:(id)arg10 starRating:(id)arg11 productType:(id)arg12;
- (id)initWithRequestID:(id)arg1 status:(int)arg2 eventTime:(double)arg3 userID:(id)arg4 actionUserID:(id)arg5 itemTitle:(id)arg6 itemDescription:(id)arg7 itemLocalizedPrice:(id)arg8 thumbnailPath:(id)arg9 ageRating:(id)arg10 starRating:(id)arg11 productType:(id)arg12 isActionUserDevice:(bool)arg13 storeLink:(id)arg14;
- (bool)isActionUserDevice;
- (bool)isEqual:(id)arg1;
- (id)itemAgeRating;
- (id)itemDescription;
- (id)itemLocalizedPrice;
- (id)itemStarRating;
- (id)itemTitle;
- (id)json;
- (id)jsonDict;
- (id)productType;
- (id)proto;
- (id)requestID;
- (id)serialize;
- (void)setActionUserID:(id)arg1;
- (void)setEventTime:(double)arg1;
- (void)setIsActionUserDevice:(bool)arg1;
- (void)setItemAgeRating:(id)arg1;
- (void)setItemDescription:(id)arg1;
- (void)setItemLocalizedPrice:(id)arg1;
- (void)setItemStarRating:(id)arg1;
- (void)setItemTitle:(id)arg1;
- (void)setProductType:(id)arg1;
- (void)setRequestID:(id)arg1;
- (void)setStatus:(int)arg1;
- (void)setStoreLink:(id)arg1;
- (void)setThumbnailPath:(id)arg1;
- (void)setUserID:(id)arg1;
- (int)status;
- (id)storeLink;
- (id)thumbnailPath;
- (id)userID;
- (bool)validNonOptionalProperty:(id)arg1 propertyName:(id)arg2;

@end
