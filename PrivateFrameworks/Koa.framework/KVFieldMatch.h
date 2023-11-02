
@interface KVFieldMatch : NSObject <NSCopying> {
    unsigned char  _fieldComponent;
    long long  _fieldType;
    KVSpanInfo * _spanInfo;
}

+ (id)labelMatchWithFieldType:(long long)arg1 spanInfo:(id)arg2;
+ (id)valueMatchWithFieldType:(long long)arg1 spanInfo:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned char)fieldComponent;
- (id)fieldSpanInfo;
- (id)fieldSpanValue;
- (long long)fieldType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpanInfo:(id)arg1 fieldType:(long long)arg2 fieldComponent:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpanMatchField:(id)arg1;
- (bool)isLabelMatch;
- (bool)isValueMatch;

@end
