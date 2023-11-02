
@interface ATXContactsDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (void)_contactsWithPredicate:(id)arg1 callback:(id /* block */)arg2;
- (void)contactsWithEmail:(id)arg1 callback:(id /* block */)arg2;
- (void)contactsWithIdentifiers:(id)arg1 callback:(id /* block */)arg2;
- (void)contactsWithName:(id)arg1 callback:(id /* block */)arg2;
- (void)contactsWithPhone:(id)arg1 callback:(id /* block */)arg2;
- (id)initWithDevice:(id)arg1;

@end
