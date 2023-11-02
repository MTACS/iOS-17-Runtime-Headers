
@protocol PKIdentityDocumentDescriptor <NSObject>

@required

- (void)addElements:(NSArray *)arg1 withIntentToStore:(PKIdentityIntentToStore *)arg2;
- (NSArray *)elements;
- (PKIdentityIntentToStore *)intentToStoreForElement:(PKIdentityElement *)arg1;

@end
