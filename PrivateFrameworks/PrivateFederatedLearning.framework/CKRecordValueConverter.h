
@interface CKRecordValueConverter : NSObject

+ (void)_validateFieldType:(Class)arg1 typeDescription:(id)arg2 inCKRecord:(id)arg3 field:(id)arg4;
+ (double)doubleFrom:(id)arg1 field:(id)arg2;
+ (bool)hasField:(id)arg1 inRecord:(id)arg2;
+ (long long)int64From:(id)arg1 field:(id)arg2;
+ (id)stringFrom:(id)arg1 field:(id)arg2;
+ (id)stringsListFrom:(id)arg1 field:(id)arg2;

@end
