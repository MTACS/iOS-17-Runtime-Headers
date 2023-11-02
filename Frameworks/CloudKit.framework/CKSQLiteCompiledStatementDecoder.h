
@interface CKSQLiteCompiledStatementDecoder : NSCoder {
    NSMutableDictionary * _propertyValues;
    CKSQLiteCompiledStatement * _statement;
}

- (void).cxx_destruct;
- (bool)ck_isDecodingForCKSQLiteDatabase;
- (bool)containsValueForKey:(id)arg1;
- (bool)decodeBoolForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)fillProperties;
- (id)initWithStatement:(id)arg1;

@end
