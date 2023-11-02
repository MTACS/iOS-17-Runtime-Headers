
@interface CRKConcreteContact : NSObject <CRKContact> {
    CNContact * _underlyingContact;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *familyName;
@property (nonatomic, readonly, copy) NSString *givenName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *nickname;
@property (nonatomic, readonly, copy) NSString *phoneticFamilyName;
@property (nonatomic, readonly, copy) NSString *phoneticGivenName;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSData *thumbnailImageData;
@property (nonatomic, readonly) CNContact *underlyingContact;

- (void).cxx_destruct;
- (id)familyName;
- (id)givenName;
- (id)identifier;
- (id)initWithContact:(id)arg1;
- (id)nickname;
- (id)phoneticFamilyName;
- (id)phoneticGivenName;
- (id)thumbnailImageData;
- (id)underlyingContact;

@end
