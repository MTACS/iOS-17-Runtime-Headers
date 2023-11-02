
@interface CNManagedDuplicate : NSObject {
    void _contactStore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _mergedNameComponents;
    void _privateContacts;
    void _privateMergedContact;
    void isAvailable;
    void isIgnored;
    void managedCohorts;
    void primaryID;
    void signature;
    void userSelectedContactImage;
    void userSelectedContactPoster;
}

- (void).cxx_destruct;
- (id)init;

@end
