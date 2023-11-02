
@interface UPDialogActOffer : NSObject <UPDialogAct> {
    UPEntityWithValue * _entityWithValue;
    NSString * _intent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) UPEntityWithValue *entityWithValue;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *intent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)entityWithValue;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 entityWithValue:(id)arg2;
- (id)intent;

@end
