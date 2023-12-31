
@interface VMUFieldValue : NSObject {
    VMUFieldInfo * _field;
    unsigned long long  _value;
}

@property (nonatomic, readonly) VMUFieldInfo *field;
@property (nonatomic, readonly) unsigned long long value;

- (void).cxx_destruct;
- (id)field;
- (id)initWithField:(id)arg1 value:(unsigned long long)arg2;
- (unsigned long long)value;

@end
