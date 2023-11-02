
@interface CRKASMConcreteUser : NSObject <CRKASMUser> {
    NSString * _appleID;
    <CRKClassKitPerson> * _backingPerson;
    NSDate * _backingPersonInitialModificationDate;
    bool  _federated;
    NSString * _identifier;
    <CRKASMNameComponents> * _nameComponents;
}

@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly) <CRKClassKitPerson> *backingPerson;
@property (nonatomic, readonly) NSDate *backingPersonInitialModificationDate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFederated, nonatomic, readonly) bool federated;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) <CRKASMNameComponents> *nameComponents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appleID;
- (id)backingPerson;
- (id)backingPersonInitialModificationDate;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithBackingPerson:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToConcreteUser:(id)arg1;
- (bool)isFederated;
- (id)nameComponents;

@end
