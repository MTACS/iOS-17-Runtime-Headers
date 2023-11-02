
@interface PXMessagesDebugTapbackStatusManager : NSObject <PXTapbackStatusManager>

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) Class decorationViewClass;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (Class)decorationViewClass;
- (bool)hasTapbacksForAsset:(id)arg1;
- (id)tapbackUserDataForAsset:(id)arg1 previousAsset:(id)arg2;

@end
