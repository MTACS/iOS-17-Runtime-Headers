
@interface HFItemBuilder : NSObject {
    HMHome * _home;
    id  _homeKitRepresentation;
}

@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) id homeKitRepresentation;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_commitSetDiff:(id)arg1 withBlock:(id /* block */)arg2;
- (id)_failureErrorWithReason:(id)arg1;
- (id)commitItem;
- (id)commitItemBuilderSetDiff:(id)arg1 addBlock:(id /* block */)arg2 deleteBlock:(id /* block */)arg3;
- (id)commitSetDiff:(id)arg1 addBlock:(id /* block */)arg2 updateBlock:(id /* block */)arg3 deleteBlock:(id /* block */)arg4;
- (id)home;
- (id)homeKitRepresentation;
- (id)init;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)lazy_verifyNameIsNotEmpty:(id)arg1;
- (id)lazy_verifyPropertiesAreSet:(id)arg1;
- (id)lazy_verifyProperty:(id)arg1 matchesCondition:(id /* block */)arg2 description:(id)arg3;
- (id)lazy_verifyPropertyIsSet:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setHomeKitRepresentation:(id)arg1;
- (id)verifyNameIsNotEmpty:(id)arg1;
- (id)verifyPropertiesAreSet:(id)arg1;
- (id)verifyProperty:(id)arg1 matchesCondition:(id /* block */)arg2 description:(id)arg3;
- (id)verifyPropertyIsSet:(id)arg1;

@end
