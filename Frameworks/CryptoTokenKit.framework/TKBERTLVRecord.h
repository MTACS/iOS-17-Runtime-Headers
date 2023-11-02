
@interface TKBERTLVRecord : TKTLVRecord

+ (id)dataForTag:(unsigned long long)arg1;
+ (unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char *)arg2;
+ (id)parseFromDataSource:(id)arg1;
+ (id)zuluDateFormatter;

- (id)initWithPropertyList:(id)arg1;
- (id)initWithTag:(unsigned long long)arg1 records:(id)arg2;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2;
- (id)propertyList;

@end