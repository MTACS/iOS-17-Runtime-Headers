
@interface CLKUIResourceProvider : NSObject {
    <CLKUIResourceProviderDelegate> * _delegate;
    NSNumber * _key;
    NSMutableSet * _uuidHistory;
}

@property (nonatomic, readonly) <CLKUIResourceProviderDelegate> *delegate;
@property (nonatomic, readonly) NSNumber *key;
@property (nonatomic, readonly) NSSet *uuidHistory;

- (void).cxx_destruct;
- (void)addUuidToHistory:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1 key:(id)arg2;
- (id)key;
- (id)uuidHistory;

@end
