
@protocol SearchUICollectionViewRestorationProtocol <NSObject>

@required

- (SearchUICollectionViewRestorationContext *)restorationContext;
- (void)setRestorationContext:(SearchUICollectionViewRestorationContext *)arg1;

@optional

- (Class)restorationContextClass;

@end
