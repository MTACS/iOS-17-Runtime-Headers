
@interface CNContactHandleStringIndexer : NSObject {
    CNCache * _indexImpl;
    NSArray * _targetHandleStrings;
}

@property (nonatomic, readonly) NSDictionary *index;
@property (nonatomic, readonly) CNCache *indexImpl;
@property (nonatomic, readonly) NSArray *targetHandleStrings;

+ (id)indexByMatchingIndexWithRawHandles:(id)arg1 toTargetHandleStrings:(id)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)index;
- (void)indexContact:(id)arg1;
- (void)indexContacts:(id)arg1;
- (void)indexEmailAddressesOnContact:(id)arg1;
- (id)indexImpl;
- (void)indexPhoneNumbersOnContact:(id)arg1;
- (id)indexWithRawHandles;
- (id)init;
- (id)initWithTargetHandleStrings:(id)arg1;
- (id)targetHandleStrings;

@end
