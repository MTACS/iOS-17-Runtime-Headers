
@protocol DIIdentityDocumentDescriptor <NSObject>

@required

- (void)addElements:(NSArray *)arg1 withIntentToStore:(DIIdentityIntentToStore *)arg2;
- (NSArray *)elements;
- (DIIdentityIntentToStore *)intentToStoreForElement:(DIIdentityElement *)arg1;

@end
