
@interface ICSecureKeyDeliveryResponse : NSObject {
    unsigned long long  _bulkRefreshWaitInterval;
    NSData * _contentKeyContextData;
    ICStoreDialogResponse * _dialog;
    long long  _failureType;
    NSDate * _renewalDate;
    NSDate * _rentalExpirationDate;
    NSDate * _rentalPlaybackStartDate;
    NSError * _serverError;
    NSData * _serverPlaybackContextData;
    long long  _status;
}

@property (nonatomic) unsigned long long bulkRefreshWaitInterval;
@property (nonatomic, copy) NSData *contentKeyContextData;
@property (nonatomic, copy) ICStoreDialogResponse *dialog;
@property (nonatomic, readonly) long long failureType;
@property (nonatomic, copy) NSDate *renewalDate;
@property (nonatomic, copy) NSDate *rentalExpirationDate;
@property (nonatomic, copy) NSDate *rentalPlaybackStartDate;
@property (nonatomic, copy) NSError *serverError;
@property (nonatomic, copy) NSData *serverPlaybackContextData;
@property (nonatomic, readonly) long long status;

- (void).cxx_destruct;
- (unsigned long long)bulkRefreshWaitInterval;
- (id)contentKeyContextData;
- (id)description;
- (id)dialog;
- (long long)failureType;
- (void)finishAssetResourceLoadingRequest:(id)arg1 withError:(id)arg2;
- (id)initWithResponseDictionary:(id)arg1 serverPlaybackContextData:(id)arg2;
- (id)renewalDate;
- (id)rentalExpirationDate;
- (id)rentalPlaybackStartDate;
- (id)serverError;
- (id)serverPlaybackContextData;
- (void)setBulkRefreshWaitInterval:(unsigned long long)arg1;
- (void)setContentKeyContextData:(id)arg1;
- (void)setDialog:(id)arg1;
- (void)setRenewalDate:(id)arg1;
- (void)setRentalExpirationDate:(id)arg1;
- (void)setRentalPlaybackStartDate:(id)arg1;
- (void)setServerError:(id)arg1;
- (void)setServerPlaybackContextData:(id)arg1;
- (long long)status;

@end
