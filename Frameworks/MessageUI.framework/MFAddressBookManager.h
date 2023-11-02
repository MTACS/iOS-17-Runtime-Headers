
@interface MFAddressBookManager : NSObject {
    void * _addressBook;
    NSHashTable * _clients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

+ (bool)isAuthorizedToUseAddressBook;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_clientsArray;
- (void)_handleAddressBookChangeNotification;
- (void)_handleAddressBookPrefsChangeNotification;
- (void)addClient:(id)arg1;
- (void*)addressBook;
- (void)dealloc;
- (id)init;
- (void)removeClient:(id)arg1;

@end
