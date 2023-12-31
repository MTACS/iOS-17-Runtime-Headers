
@interface HAPArrayWrapper : HAPFieldWrapper {
    NSArray * _field;
    id /* block */  _objectCreator;
}

@property (nonatomic, retain) NSArray *field;
@property (nonatomic, copy) id /* block */ objectCreator;

+ (id)wrappertlv:(unsigned long long)arg1 name:(id)arg2 objectCreator:(id /* block */)arg3;

- (void).cxx_destruct;
- (id)field;
- (id /* block */)objectCreator;
- (void)setField:(id)arg1;
- (void)setObjectCreator:(id /* block */)arg1;

@end
