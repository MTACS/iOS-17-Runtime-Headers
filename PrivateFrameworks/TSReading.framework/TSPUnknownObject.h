
@interface TSPUnknownObject : TSPObject {
    NSString * _packageLocator;
    NSObject<OS_dispatch_data> * _serializedData;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_data> *serializedData;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (id)packageLocator;
- (id)serializedData;
- (void)willModify;
- (void)willModifyForUpgrade;

@end
