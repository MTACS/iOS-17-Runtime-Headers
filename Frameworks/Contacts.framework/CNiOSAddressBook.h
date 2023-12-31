
@interface CNiOSAddressBook : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    bool  _addressBookIsShared;
    NSMutableSet * _addressBookPool;
    id /* block */  _addressBookProvider;
    NSObject<OS_dispatch_source> * _memoryMonitoringSource;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) bool addressBookIsShared;
@property (nonatomic, readonly) NSMutableSet *addressBookPool;
@property (nonatomic, readonly, copy) id /* block */ addressBookProvider;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *memoryMonitoringSource;

+ (void)initialize;
+ (void*)newAddressBookWithDelegateInfo:(id)arg1;
+ (void*)newAddressBookWithURL:(id)arg1;
+ (void*)newInMemoryAddressBook;

- (void).cxx_destruct;
- (id)accessQueue;
- (bool)addressBookIsShared;
- (id)addressBookPool;
- (id /* block */)addressBookProvider;
- (void)flushPool;
- (id)init;
- (id)initWithAddressBookProvider:(id /* block */)arg1;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)memoryMonitoringSource;
- (id)performAsynchronousWorkWithInvalidatedAddressBook:(id /* block */)arg1;
- (id)performSynchronousWorkWithInvalidatedAddressBook:(id /* block */)arg1;
- (void*)popAddressBook;
- (void*)preparedAddressBook:(void*)arg1;
- (void)pushAddressBook:(void*)arg1;
- (id)resultWithInvalidatedAddressBook:(id /* block */)arg1;

@end
