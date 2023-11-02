
@interface PXNotThisPersonAction : PXPhotosAction {
    <PXFastEnumeration> * _assets;
    bool  _didSetPersonAsVerified;
    <PXFastEnumeration> * _faces;
    PHPerson * _person;
    bool  _personWasVerified;
}

@property (nonatomic) bool didSetPersonAsVerified;
@property (nonatomic, readonly) <PXFastEnumeration> *faces;
@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (id)_assetsForLogging;
- (id)_facesForLogging;
- (id)actionIdentifier;
- (id)actionNameLocalizationKey;
- (id)analyticsEventName;
- (id)assets;
- (bool)didSetPersonAsVerified;
- (id)faces;
- (id)initWithPerson:(id)arg1 assets:(id)arg2;
- (id)initWithPerson:(id)arg1 faces:(id)arg2;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (id)person;
- (void)setDidSetPersonAsVerified:(bool)arg1;

@end
