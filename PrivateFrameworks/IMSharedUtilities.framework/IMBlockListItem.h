
@interface IMBlockListItem : NSObject {
    NSString * _address;
    NSString * _cachedFormattedHandle;
    NSString * _cachedFormattedPersonName;
    void * _cmfItem;
    IMBlockListPerson * _person;
}

@property (nonatomic, retain) NSString *address;
@property (nonatomic, retain) NSString *cachedFormattedHandle;
@property (nonatomic, retain) NSString *cachedFormattedPersonName;
@property (nonatomic) void*cmfItem;
@property (nonatomic, readonly) CNContact *cnPerson;
@property (nonatomic, retain) IMBlockListPerson *person;

- (void).cxx_destruct;
- (id)address;
- (id)cachedFormattedHandle;
- (id)cachedFormattedPersonName;
- (void*)cmfItem;
- (id)cnPerson;
- (void)dealloc;
- (id)formattedAddress;
- (id)formattedHandle;
- (id)fullName;
- (id)initWithCNContact:(id)arg1 address:(id)arg2 cmfItemRef:(void*)arg3;
- (id)initWithPerson:(id)arg1 address:(id)arg2 cmfItemRef:(void*)arg3;
- (bool)isEqualToBlockListItem:(id)arg1;
- (void)lookupPerson;
- (id)person;
- (void)setAddress:(id)arg1;
- (void)setCachedFormattedHandle:(id)arg1;
- (void)setCachedFormattedPersonName:(id)arg1;
- (void)setCmfItem:(void*)arg1;
- (void)setPerson:(id)arg1;

@end
