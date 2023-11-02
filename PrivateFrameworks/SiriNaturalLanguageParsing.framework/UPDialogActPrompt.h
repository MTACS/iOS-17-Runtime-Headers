
@interface UPDialogActPrompt : NSObject <UPDialogAct> {
    NSString * _entityName;
    NSString * _entityType;
    NSString * _intent;
    USOSerializedGraph * _reference;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *entityName;
@property (readonly, copy) NSString *entityType;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *intent;
@property (readonly) USOSerializedGraph *reference;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)entityName;
- (id)entityType;
- (id)initWithIntent:(id)arg1 entityType:(id)arg2 entityName:(id)arg3 reference:(id)arg4;
- (id)intent;
- (id)reference;

@end
