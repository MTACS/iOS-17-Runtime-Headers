
@interface HAPDataWrapper : HAPFieldWrapper {
    NSData * _field;
}

@property (nonatomic, retain) NSData *field;

+ (id)wrappertlv:(unsigned long long)arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)field;
- (void)setField:(id)arg1;

@end
