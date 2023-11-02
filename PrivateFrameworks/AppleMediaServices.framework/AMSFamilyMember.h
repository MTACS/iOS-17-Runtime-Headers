
@interface AMSFamilyMember : NSObject {
    bool  _askToBuyEnabled;
    bool  _currentSignedInUser;
    NSString * _firstName;
    NSNumber * _iCloudDSID;
    NSString * _iCloudUsername;
    NSNumber * _iTunesDSID;
    NSString * _iTunesUsername;
    NSString * _lastName;
    bool  _sharingPurchases;
}

@property (getter=isAskToBuyEnabled, nonatomic, readonly) bool askToBuyEnabled;
@property (getter=isCurrentSignedInUser, nonatomic) bool currentSignedInUser;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *firstName;
@property (nonatomic, readonly) NSNumber *iCloudDSID;
@property (nonatomic, readonly) NSString *iCloudUsername;
@property (nonatomic, readonly) NSNumber *iTunesDSID;
@property (nonatomic, readonly) NSString *iTunesUsername;
@property (nonatomic, readonly) NSString *lastName;
@property (getter=isSharingPurchases, nonatomic, readonly) bool sharingPurchases;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)firstName;
- (id)iCloudDSID;
- (id)iCloudUsername;
- (id)iTunesDSID;
- (id)iTunesUsername;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isAskToBuyEnabled;
- (bool)isCurrentSignedInUser;
- (bool)isSharingPurchases;
- (id)lastName;
- (void)setCurrentSignedInUser:(bool)arg1;

@end
