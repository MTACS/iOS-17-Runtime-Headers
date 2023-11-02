
@interface IKJSEntityValueProvider : IKJSObject <IKJSEntityValueProvider> {
    <IKEntityValueProviding> * _entityValueProvider;
}

@property (nonatomic, retain) <IKEntityValueProviding> *entityValueProvider;

- (void).cxx_destruct;
- (id)_valueForEntityProperty:(id)arg1;
- (id)entityValueProvider;
- (void)setEntityValueProvider:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end
