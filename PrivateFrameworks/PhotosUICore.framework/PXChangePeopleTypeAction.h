
@interface PXChangePeopleTypeAction : PXPhotosAction {
    <PXFastEnumeration> * _collections;
    unsigned long long  _firstManualOrder;
    long long  _type;
}

@property (nonatomic) unsigned long long firstManualOrder;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)collections;
- (unsigned long long)firstManualOrder;
- (id)initWithPeople:(id)arg1 type:(long long)arg2;
- (id)localizedActionName;
- (void)performAction:(id /* block */)arg1;
- (void)performUndo:(id /* block */)arg1;
- (void)setFirstManualOrder:(unsigned long long)arg1;
- (long long)type;

@end
