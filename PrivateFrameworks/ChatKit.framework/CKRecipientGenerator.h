
@interface CKRecipientGenerator : NSObject {
    NSArray * _searchABPropertyTypes;
}

@property (nonatomic, retain) NSArray *searchABPropertyTypes;

+ (id)sharedRecipientGenerator;

- (void).cxx_destruct;
- (void)getAddressForContact:(id)arg1 address:(id*)arg2 kind:(unsigned long long*)arg3;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithContact:(id)arg1;
- (id)recipientWithContactProperty:(id)arg1;
- (id)searchABPropertyTypes;
- (void)setSearchABPropertyTypes:(id)arg1;

@end
