
@interface STSField : NSObject {
    unsigned long long  _fieldType;
    bool  _odaRequired;
    unsigned long long  _terminalType;
}

@property (readonly) unsigned long long fieldType;
@property (readonly) bool odaRequired;
@property (readonly) unsigned long long terminalType;

- (unsigned long long)fieldType;
- (bool)odaRequired;
- (void)setFieldType:(unsigned long long)arg1;
- (void)setODARequired:(bool)arg1;
- (void)setTerminalType:(unsigned long long)arg1;
- (unsigned long long)terminalType;

@end
