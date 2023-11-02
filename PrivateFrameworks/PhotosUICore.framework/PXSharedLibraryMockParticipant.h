
@interface PXSharedLibraryMockParticipant : NSObject <PXSharedLibraryImageProvider, PXSharedLibraryParticipant> {
    NSString * _emailAddress;
    bool  _isCurrentUser;
    NSString * _localIdentifier;
    NSPersonNameComponents * _nameComponents;
    <PXPerson> * _person;
    NSString * _phoneNumber;
    long long  _status;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *emailAddress;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <PXSharedLibraryImageProvider> *imageProvider;
@property (nonatomic) bool isCurrentUser;
@property (nonatomic, readonly, copy) NSString *localIdentifier;
@property (nonatomic, copy) NSPersonNameComponents *nameComponents;
@property (nonatomic, retain) <PXPerson> *person;
@property (nonatomic, copy) NSString *phoneNumber;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelRequestWithIdentifier:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)emailAddress;
- (id)imageProvider;
- (id)init;
- (bool)isCurrentUser;
- (id)localIdentifier;
- (id)nameComponents;
- (id)person;
- (id)phoneNumber;
- (long long)requestImageWithTargetSize:(struct CGSize { double x1; double x2; })arg1 displayScale:(double)arg2 isRTL:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)setEmailAddress:(id)arg1;
- (void)setIsCurrentUser:(bool)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (long long)status;

@end
