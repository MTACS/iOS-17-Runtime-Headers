
@interface CNHandleExpander : NSObject {
    NSArray * _expandedAddresses;
    NSArray * _incomingAddresses;
}

@property (nonatomic, retain) NSArray *expandedAddresses;
@property (nonatomic, retain) NSArray *incomingAddresses;

+ (id)contactStoreForFetchingContacts;

- (void).cxx_destruct;
- (void)expandHandles;
- (id)expandedAddresses;
- (id)expandedHandles;
- (id)incomingAddresses;
- (id)initWithHandles:(id)arg1;
- (void)setExpandedAddresses:(id)arg1;
- (void)setIncomingAddresses:(id)arg1;

@end
