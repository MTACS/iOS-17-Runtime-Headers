
@interface CBORArray : CBORValue {
    NSMutableArray * m_data;
}

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (int)fieldType;
- (id)init;
- (id)initWith:(id)arg1;
- (void)write:(id)arg1;

@end
