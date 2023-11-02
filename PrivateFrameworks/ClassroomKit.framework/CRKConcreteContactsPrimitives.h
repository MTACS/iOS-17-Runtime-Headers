
@interface CRKConcreteContactsPrimitives : NSObject <CRKContactsPrimitives> {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;

- (void).cxx_destruct;
- (id)contactStore;
- (id)fetchMeCardContactWithError:(id*)arg1;
- (id)init;
- (id)initWithContactStore:(id)arg1;
- (id)subscribeToContactsChanges:(id /* block */)arg1;

@end
