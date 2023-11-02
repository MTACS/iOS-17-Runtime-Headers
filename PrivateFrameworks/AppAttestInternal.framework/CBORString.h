
@interface CBORString : CBORValue {
    NSString * m_data;
}

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (int)fieldType;
- (id)getLabel;
- (id)initWith:(id)arg1;
- (void)write:(id)arg1;

@end
