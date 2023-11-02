
@interface VUIFamilyMember : NSObject {
    NSString * _accountName;
    <VUIFamilyMemberDelegate> * _delegate;
    NSString * _firstName;
    NSString * _lastName;
    NSNumber * _memberIdentifier;
    UIImage * _memberImage;
    bool  _sharingPurchases;
}

@property (nonatomic, retain) NSString *accountName;
@property (nonatomic) <VUIFamilyMemberDelegate> *delegate;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSNumber *memberIdentifier;
@property (nonatomic, retain) UIImage *memberImage;
@property (nonatomic) bool sharingPurchases;

- (void).cxx_destruct;
- (id)accountName;
- (id)delegate;
- (id)firstName;
- (unsigned long long)hash;
- (id)lastName;
- (id)memberIdentifier;
- (id)memberImage;
- (void)setAccountName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setMemberIdentifier:(id)arg1;
- (void)setMemberImage:(id)arg1;
- (void)setSharingPurchases:(bool)arg1;
- (bool)sharingPurchases;

@end
