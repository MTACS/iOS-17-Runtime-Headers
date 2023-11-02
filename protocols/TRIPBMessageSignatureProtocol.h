
@protocol TRIPBMessageSignatureProtocol

@optional

+ (id)getClassValue;

- (id)getArray;
- (unsigned long long)getArrayCount;
- (bool)getBool;
- (bool)getBoolAtIndex:(unsigned long long)arg1;
- (NSData *)getBytes;
- (NSData *)getBytesAtIndex:(unsigned long long)arg1;
- (double)getDouble;
- (double)getDoubleAtIndex:(unsigned long long)arg1;
- (int)getEnum;
- (int)getEnumAtIndex:(unsigned long long)arg1;
- (unsigned int)getFixed32;
- (unsigned int)getFixed32AtIndex:(unsigned long long)arg1;
- (unsigned long long)getFixed64;
- (unsigned long long)getFixed64AtIndex:(unsigned long long)arg1;
- (float)getFloat;
- (float)getFloatAtIndex:(unsigned long long)arg1;
- (TRIPBMessage *)getGroup;
- (TRIPBMessage *)getGroupAtIndex:(unsigned long long)arg1;
- (int)getInt32;
- (int)getInt32AtIndex:(unsigned long long)arg1;
- (long long)getInt64;
- (long long)getInt64AtIndex:(unsigned long long)arg1;
- (TRIPBMessage *)getMessage;
- (TRIPBMessage *)getMessageAtIndex:(unsigned long long)arg1;
- (int)getSFixed32;
- (int)getSFixed32AtIndex:(unsigned long long)arg1;
- (long long)getSFixed64;
- (long long)getSFixed64AtIndex:(unsigned long long)arg1;
- (int)getSInt32;
- (int)getSInt32AtIndex:(unsigned long long)arg1;
- (long long)getSInt64;
- (long long)getSInt64AtIndex:(unsigned long long)arg1;
- (NSString *)getString;
- (NSString *)getStringAtIndex:(unsigned long long)arg1;
- (unsigned int)getUInt32;
- (unsigned int)getUInt32AtIndex:(unsigned long long)arg1;
- (unsigned long long)getUInt64;
- (unsigned long long)getUInt64AtIndex:(unsigned long long)arg1;
- (void)setArray:(NSArray *)arg1;
- (void)setBool:(bool)arg1;
- (void)setBytes:(NSData *)arg1;
- (void)setDouble:(double)arg1;
- (void)setEnum:(int)arg1;
- (void)setFixed32:(unsigned int)arg1;
- (void)setFixed64:(unsigned long long)arg1;
- (void)setFloat:(float)arg1;
- (void)setGroup:(TRIPBMessage *)arg1;
- (void)setInt32:(int)arg1;
- (void)setInt64:(long long)arg1;
- (void)setMessage:(TRIPBMessage *)arg1;
- (void)setSFixed32:(int)arg1;
- (void)setSFixed64:(long long)arg1;
- (void)setSInt32:(int)arg1;
- (void)setSInt64:(long long)arg1;
- (void)setString:(NSString *)arg1;
- (void)setUInt32:(unsigned int)arg1;
- (void)setUInt64:(unsigned long long)arg1;

@end
