
@protocol ABSRecord <NSObject>

@required

- (NSString *)CNIdentifierString;
- (ABSAddressBook *)addressBook;
- (<ABSCNImplementation> *)cnImpl;
- (NSString *)compositeName;
- (void*)copyValueForProperty:(int)arg1;
- (int)id;
- (bool)removeProperty:(int)arg1 withError:(id*)arg2;
- (void)replaceRecordStorageWithCNObject:(id <ABSCNImplementation>)arg1;
- (void)setAddressBook:(ABSAddressBook *)arg1;
- (void)setCnImpl:(id <ABSCNImplementation>)arg1;
- (void)setSource:(ABSSource *)arg1;
- (bool)setValue:(void*)arg1 forProperty:(int)arg2 withError:(struct __CFError {}**)arg3;
- (ABSSource *)source;
- (unsigned int)type;

@end
