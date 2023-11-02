
@interface SGContactDetailsHolder : NSObject {
    SGContactDetail * _birthday;
    NSArray * _emailAddresses;
    NSArray * _instantMessageAddresses;
    NSArray * _phoneNumbers;
    SGContactDetail * _photoPath;
    NSArray * _postalAddresses;
    NSArray * _socialProfiles;
}

@property (nonatomic, retain) SGContactDetail *birthday;
@property (nonatomic, retain) NSArray *emailAddresses;
@property (nonatomic, retain) NSArray *instantMessageAddresses;
@property (nonatomic, retain) NSArray *phoneNumbers;
@property (nonatomic, retain) SGContactDetail *photoPath;
@property (nonatomic, retain) NSArray *postalAddresses;
@property (nonatomic, retain) NSArray *socialProfiles;

- (void).cxx_destruct;
- (id)birthday;
- (id)emailAddresses;
- (id)instantMessageAddresses;
- (id)phoneNumbers;
- (id)photoPath;
- (id)postalAddresses;
- (void)setBirthday:(id)arg1;
- (void)setEmailAddresses:(id)arg1;
- (void)setInstantMessageAddresses:(id)arg1;
- (void)setPhoneNumbers:(id)arg1;
- (void)setPhotoPath:(id)arg1;
- (void)setPostalAddresses:(id)arg1;
- (void)setSocialProfiles:(id)arg1;
- (id)socialProfiles;

@end
