
@protocol CNKeyDescriptor_Private <CNKeyDescriptor>

@required

- (void)_cn_executeGetterForRepresentedKeys:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, id, id /* block */, NSString *, void*
- (CNContactKeyVector *)_cn_ignorableKeys;
- (CNContactKeyVector *)_cn_optionalKeys;
- (CNContactKeyVector *)_cn_requiredKeys;

@optional

- (NSString *)_cn_recursiveDescriptionWithPrefix:(NSString *)arg1;
- (void)_cn_setUnauthorizedKeys:(CNContactKeyVector *)arg1;
- (CNContactKeyVector *)_cn_unauthorizedKeys;

@end
