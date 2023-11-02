
@interface STKListItemsSessionData : STKTextSessionData <BSXPCCoding> {
    NSArray * _listItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *listItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithText:(id)arg1 simLabel:(id)arg2 listItems:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1;
- (id)listItems;

@end
