
@protocol PXReusableObjectPoolDelegate <NSObject>

@optional

- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 didCreateReusableObject:(id <PXReusableObject>)arg2;
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 didEvictReusableObject:(id <PXReusableObject>)arg2;
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 objectBecameReusable:(id <PXReusableObject>)arg2;
- (void)reusableObjectPool:(PXReusableObjectPool *)arg1 objectPreparedForReuse:(id <PXReusableObject>)arg2;

@end
