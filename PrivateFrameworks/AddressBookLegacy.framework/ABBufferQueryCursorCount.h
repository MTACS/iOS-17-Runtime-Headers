
@interface ABBufferQueryCursorCount : NSObject {
    ABBufferQueryCount * _query;
}

@property (nonatomic, readonly) ABBufferQueryCount *query;

- (void)dealloc;
- (long long)fetchContactCount;
- (id)initWithAddressBook:(void*)arg1 predicate:(id)arg2 includeLinkedContacts:(bool)arg3 managedConfiguration:(id)arg4;
- (id)initWithQuery:(id)arg1;
- (id)query;

@end
