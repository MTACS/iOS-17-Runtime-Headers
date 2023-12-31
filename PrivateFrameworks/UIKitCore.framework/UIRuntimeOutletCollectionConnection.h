
@interface UIRuntimeOutletCollectionConnection : UIRuntimeConnection {
    bool  addsContentToExistingCollection;
    NSString * runtimeCollectionClassName;
}

@property bool addsContentToExistingCollection;
@property (copy) NSString *runtimeCollectionClassName;

- (void).cxx_destruct;
- (bool)addsContentToExistingCollection;
- (void)connect;
- (void)connectForSimulator;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)performConnect;
- (id)runtimeCollectionClassName;
- (void)setAddsContentToExistingCollection:(bool)arg1;
- (void)setRuntimeCollectionClassName:(id)arg1;

@end
