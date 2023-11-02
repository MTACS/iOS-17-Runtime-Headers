
@interface SecCBORNegative : SecCBORValue {
    long long  m_data;
}

- (long long)compare:(id)arg1;
- (int)fieldType;
- (id)getLabel;
- (id)initWith:(long long)arg1;
- (void)write:(id)arg1;

@end
