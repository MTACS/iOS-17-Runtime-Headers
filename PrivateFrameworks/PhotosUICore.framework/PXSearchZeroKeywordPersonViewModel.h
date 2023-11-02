
@interface PXSearchZeroKeywordPersonViewModel : PXSearchZeroKeywordBaseViewModel {
    PHPerson * _person;
}

@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (id)debugDictionary;
- (id)initWithRepresentedObject:(id)arg1 representedPerson:(id)arg2;
- (id)person;
- (id)title;

@end
