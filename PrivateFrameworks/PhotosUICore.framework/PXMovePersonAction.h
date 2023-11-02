
@interface PXMovePersonAction : PXPhotosAction {
    long long  _destinationIndex;
    <PXFastEnumeration> * _destinationPeople;
    long long  _destinationType;
    PXPhotoLibraryLocalDefaults * _localDefaults;
    NSArray * _modifiedDestinationPeople;
    NSArray * _modifiedOtherPeople;
    <PXFastEnumeration> * _otherPeople;
    PHPerson * _sourcePerson;
    NSNumber * _sourceSortingType;
}

@property (nonatomic, readonly) long long destinationIndex;
@property (nonatomic, readonly) <PXFastEnumeration> *destinationPeople;
@property (nonatomic, readonly) long long destinationType;
@property (nonatomic, readonly) PXPhotoLibraryLocalDefaults *localDefaults;
@property (nonatomic, copy) NSArray *modifiedDestinationPeople;
@property (nonatomic, copy) NSArray *modifiedOtherPeople;
@property (nonatomic, readonly) <PXFastEnumeration> *otherPeople;
@property (nonatomic, readonly) PHPerson *sourcePerson;
@property (nonatomic, retain) NSNumber *sourceSortingType;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (void)changeRequestForUndo:(id)arg1;
- (long long)destinationIndex;
- (id)destinationPeople;
- (long long)destinationType;
- (id)initWithSourcePerson:(id)arg1 destinationPeople:(id)arg2 destinationIndex:(long long)arg3 destinationType:(long long)arg4 otherPeople:(id)arg5;
- (id)localDefaults;
- (id)localizedActionName;
- (id)modifiedDestinationPeople;
- (id)modifiedOtherPeople;
- (id)otherPeople;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setModifiedDestinationPeople:(id)arg1;
- (void)setModifiedOtherPeople:(id)arg1;
- (void)setSourceSortingType:(id)arg1;
- (id)sourcePerson;
- (id)sourceSortingType;

@end
