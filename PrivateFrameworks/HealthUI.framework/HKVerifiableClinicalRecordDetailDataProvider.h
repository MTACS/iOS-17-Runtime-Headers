
@interface HKVerifiableClinicalRecordDetailDataProvider : NSObject {
    NSMutableDictionary * _displayItems;
    NSArray * _medicalRecords;
    HKSignedClinicalDataRecord * _record;
    NSMutableDictionary * _sectionFooters;
    NSMutableDictionary * _sectionHeaders;
    long long  _sectionIndex;
}

@property (nonatomic, retain) NSMutableDictionary *displayItems;
@property (nonatomic, retain) NSArray *medicalRecords;
@property (nonatomic, retain) HKSignedClinicalDataRecord *record;
@property (nonatomic, retain) NSMutableDictionary *sectionFooters;
@property (nonatomic, retain) NSMutableDictionary *sectionHeaders;
@property (nonatomic) long long sectionIndex;

- (void).cxx_destruct;
- (id)addressesItem;
- (id)birthSexItem;
- (id)birthdayItem;
- (void)createDisplayItems;
- (void)createPersonalInfoItems;
- (void)createRecordSections;
- (void)createVerificationItems;
- (id)displayItemForSection:(long long)arg1 row:(long long)arg2;
- (id)displayItems;
- (id)emailAddressesItem;
- (id)ethnicityItem;
- (id)expiresItem;
- (id)footerForSection:(long long)arg1;
- (id)genderItem;
- (id)headerForSection:(long long)arg1;
- (id)identifiersItem;
- (id)initWithSignedRecord:(id)arg1 medicalRecords:(id)arg2;
- (id)issuedItem;
- (id)maritalStatusItem;
- (id)medicalRecords;
- (id)nameItem;
- (long long)numberOfRowsForSection:(long long)arg1;
- (long long)numberOfSections;
- (id)phoneNumbersItem;
- (id)raceItem;
- (id)record;
- (id)sectionFooters;
- (id)sectionHeaders;
- (long long)sectionIndex;
- (void)setDisplayItems:(id)arg1;
- (void)setMedicalRecords:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setSectionFooters:(id)arg1;
- (void)setSectionHeaders:(id)arg1;
- (void)setSectionIndex:(long long)arg1;
- (id)sourceItem;
- (id)statusItem;

@end
