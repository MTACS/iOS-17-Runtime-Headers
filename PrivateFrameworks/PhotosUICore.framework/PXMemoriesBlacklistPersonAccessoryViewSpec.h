
@interface PXMemoriesBlacklistPersonAccessoryViewSpec : PXMemoriesBlacklistAccessoryViewSpec {
    <PXPerson> * _person;
}

@property (nonatomic, readonly) <PXPerson> *person;

+ (id)specWithPerson:(id)arg1;

- (void).cxx_destruct;
- (id)initWithPerson:(id)arg1;
- (id)person;

@end
