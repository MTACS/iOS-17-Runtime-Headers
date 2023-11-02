
@interface BMFamilyAskToBuy : BMEventBase <BMStoreData> {
    NSString * _actionUserID;
    NSString * _ageRating;
    double  _eventTime;
    bool  _hasEventTime;
    bool  _hasIsActionUserDevice;
    bool  _hasStarRating;
    bool  _isActionUserDevice;
    NSString * _itemDescription;
    NSString * _itemLocalizedPrice;
    NSString * _itemTitle;
    NSString * _productType;
    NSString * _requestID;
    double  _starRating;
    int  _status;
    NSString * _storeLink;
    NSString * _thumbnailPath;
    NSString * _userID;
}

@property (nonatomic, readonly) NSString *actionUserID;
@property (nonatomic, readonly) NSString *ageRating;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double eventTime;
@property (nonatomic) bool hasEventTime;
@property (nonatomic) bool hasIsActionUserDevice;
@property (nonatomic) bool hasStarRating;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isActionUserDevice;
@property (nonatomic, readonly) NSString *itemDescription;
@property (nonatomic, readonly) NSString *itemLocalizedPrice;
@property (nonatomic, readonly) NSString *itemTitle;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) NSString *requestID;
@property (nonatomic, readonly) double starRating;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) NSString *storeLink;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *thumbnailPath;
@property (nonatomic, readonly) NSString *userID;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)actionUserID;
- (id)ageRating;
- (unsigned int)dataVersion;
- (id)description;
- (double)eventTime;
- (bool)hasEventTime;
- (bool)hasIsActionUserDevice;
- (bool)hasStarRating;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithRequestID:(id)arg1 eventTime:(id)arg2 userID:(id)arg3 actionUserID:(id)arg4 status:(int)arg5 itemTitle:(id)arg6 itemDescription:(id)arg7 itemLocalizedPrice:(id)arg8 thumbnailPath:(id)arg9 ageRating:(id)arg10 starRating:(id)arg11 productType:(id)arg12 isActionUserDevice:(id)arg13 storeLink:(id)arg14;
- (bool)isActionUserDevice;
- (bool)isEqual:(id)arg1;
- (id)itemDescription;
- (id)itemLocalizedPrice;
- (id)itemTitle;
- (id)jsonDictionary;
- (id)productType;
- (id)requestID;
- (id)serialize;
- (void)setHasEventTime:(bool)arg1;
- (void)setHasIsActionUserDevice:(bool)arg1;
- (void)setHasStarRating:(bool)arg1;
- (double)starRating;
- (int)status;
- (id)storeLink;
- (id)thumbnailPath;
- (id)userID;
- (void)writeTo:(id)arg1;

@end
