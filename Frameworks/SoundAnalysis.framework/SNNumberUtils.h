
@interface SNNumberUtils : NSObject

+ (long long)gcdOfInt64:(long long)arg1 andOther:(long long)arg2;
+ (id)numberClampedToSaturatedInt16:(id)arg1;
+ (id)numberClampedToSaturatedInt32:(id)arg1;
+ (id)numberClampedToSaturatedInt64:(id)arg1;
+ (id)numberClampedToSaturatedInt8:(id)arg1;
+ (id)numberClampedToSaturatedInteger:(id)arg1;
+ (id)numberClampedToSaturatedUInt16:(id)arg1;
+ (id)numberClampedToSaturatedUInt32:(id)arg1;
+ (id)numberClampedToSaturatedUInt64:(id)arg1;
+ (id)numberClampedToSaturatedUInt8:(id)arg1;
+ (id)numberClampedToSaturatedUnsignedInteger:(id)arg1;
+ (bool)numberIsDouble:(id)arg1;
+ (bool)numberIsInt16:(id)arg1;
+ (bool)numberIsInt32:(id)arg1;
+ (bool)numberIsInt64:(id)arg1;
+ (bool)numberIsInt8:(id)arg1;
+ (bool)numberIsInteger:(id)arg1;
+ (bool)numberIsNegative:(id)arg1;
+ (bool)numberIsPositive:(id)arg1;
+ (bool)numberIsUInt16:(id)arg1;
+ (bool)numberIsUInt32:(id)arg1;
+ (bool)numberIsUInt64:(id)arg1;
+ (bool)numberIsUInt8:(id)arg1;
+ (bool)numberIsUnsignedInteger:(id)arg1;
+ (short)saturatedInt16FromNumber:(id)arg1;
+ (int)saturatedInt32FromNumber:(id)arg1;
+ (long long)saturatedInt64FromNumber:(id)arg1;
+ (BOOL)saturatedInt8FromNumber:(id)arg1;
+ (long long)saturatedIntegerFromNumber:(id)arg1;
+ (unsigned short)saturatedUInt16FromNumber:(id)arg1;
+ (unsigned int)saturatedUInt32FromNumber:(id)arg1;
+ (unsigned long long)saturatedUInt64FromNumber:(id)arg1;
+ (unsigned char)saturatedUInt8FromNumber:(id)arg1;
+ (unsigned long long)saturatedUnsignedIntegerFromNumber:(id)arg1;
+ (bool)thoroughlyCheckNumber:(id)arg1 isEqualToNumber:(id)arg2;
+ (bool)validateNumberIsDouble:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsInt16:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsInt32:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsInt64:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsInt8:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsInteger:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsNegative:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsPositive:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsUInt16:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsUInt32:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsUInt64:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsUInt8:(id)arg1 error:(id*)arg2;
+ (bool)validateNumberIsUnsignedInteger:(id)arg1 error:(id*)arg2;

- (id)init;

@end
