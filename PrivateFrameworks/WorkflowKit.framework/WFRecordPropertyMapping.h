
@interface WFRecordPropertyMapping : NSObject {
    id  _destinationObject;
    WFRecordProperty * _destinationProperty;
    id  _sourceObject;
    WFRecordProperty * _sourceProperty;
}

@property (nonatomic) id destinationObject;
@property (nonatomic, retain) WFRecordProperty *destinationProperty;
@property (nonatomic) id sourceObject;
@property (nonatomic, retain) WFRecordProperty *sourceProperty;

- (void).cxx_destruct;
- (id)destinationObject;
- (id)destinationProperty;
- (id)getterMethodSignature;
- (SEL)getterSelector;
- (unsigned long long)hash;
- (id)initWithSourceObject:(id)arg1 property:(id)arg2 destinationObject:(id)arg3 property:(id)arg4;
- (void)invokeGetterWithBuffer:(void**)arg1 length:(unsigned long long*)arg2;
- (void)invokeSetterWithBuffer:(void**)arg1 length:(unsigned long long*)arg2;
- (bool)isEqual:(id)arg1;
- (void)propagate;
- (void)propagate:(bool)arg1;
- (void)propagateUsingKVC;
- (void)propagateUsingSetter;
- (void)setDestinationObject:(id)arg1;
- (void)setDestinationProperty:(id)arg1;
- (void)setSourceObject:(id)arg1;
- (void)setSourceProperty:(id)arg1;
- (id)setterMethodSignature;
- (SEL)setterSelector;
- (id)sourceObject;
- (id)sourceProperty;

@end
