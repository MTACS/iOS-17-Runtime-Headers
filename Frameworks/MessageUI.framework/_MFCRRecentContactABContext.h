
@interface _MFCRRecentContactABContext : NSObject {
    void * _existingPerson;
    int  _identifier;
    void * _interimPerson;
}

- (void)dealloc;
- (void*)existingPerson;
- (int)identifier;
- (id)init;
- (void*)interimPerson;
- (void)setExistingPerson:(void*)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setInterimPerson:(void*)arg1;

@end
