
@interface CBORUnsigned : CBORValue {
    unsigned long long  m_data;
}

- (long long)compare:(id)arg1;
- (int)fieldType;
- (id)getLabel;
- (id)initWith:(unsigned long long)arg1;
- (void)write:(id)arg1;

@end
