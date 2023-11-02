
@interface HFReorderableItemListAbstractBase : NSObject {
    <HMApplicationData><HFApplicationData> * _applicationDataContainer;
    NSString * _category;
}

@property (nonatomic, readonly) <HMApplicationData><HFApplicationData> *applicationDataContainer;
@property (nonatomic, readonly) NSString *category;
@property (readonly) bool isEmpty;

- (void).cxx_destruct;
- (id)applicationDataContainer;
- (id)category;
- (id)init;
- (id)initWithApplicationDataContainer:(id)arg1 category:(id)arg2;
- (bool)isEmpty;
- (id)saveWithSender:(id)arg1;
- (void)setSortedItems:(id)arg1;

@end
