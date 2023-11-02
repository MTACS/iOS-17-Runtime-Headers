
@interface HAPUUIDWrapper : HAPFieldWrapper {
    NSUUID * _field;
}

@property (nonatomic, retain) NSUUID *field;

+ (id)wrappertlv:(unsigned long long)arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)field;
- (void)setField:(id)arg1;

@end
