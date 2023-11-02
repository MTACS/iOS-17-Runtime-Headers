
@interface HAPUint8Wrapper : HAPFieldWrapper {
    NSNumber * _field;
}

@property (nonatomic, retain) NSNumber *field;

+ (id)wrappertlv:(unsigned long long)arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)field;
- (void)setField:(id)arg1;

@end
