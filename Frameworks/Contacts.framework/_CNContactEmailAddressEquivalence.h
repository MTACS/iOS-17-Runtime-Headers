
@interface _CNContactEmailAddressEquivalence : NSObject <_CNContactHandleStringEquivalenceStrategy> {
    NSString * _rawString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)indexKeyForString:(id)arg1;

- (void).cxx_destruct;
- (id)initWithEmailAddress:(id)arg1;
- (bool)isEquivalentToString:(id)arg1 strict:(bool*)arg2;

@end
