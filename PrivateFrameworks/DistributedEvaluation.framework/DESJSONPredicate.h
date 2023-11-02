
@interface DESJSONPredicate : NSObject

+ (bool)_testStrings:(id)arg1 test:(id)arg2 caseInsensitive:(bool)arg3;
+ (bool)evaluateAnd:(id)arg1 onObj:(id)arg2;
+ (bool)evaluateArrayOp:(id)arg1 onObj:(id)arg2;
+ (bool)evaluateBoolOp:(id)arg1 onObj:(id)arg2;
+ (bool)evaluateDefOp:(id)arg1 onObj:(id)arg2;
+ (bool)evaluateDict:(id)arg1 onObj:(id)arg2;
+ (bool)evaluateJson:(id)arg1 onJson:(id)arg2;
+ (bool)evaluateNumericOp:(id)arg1 onObj:(id)arg2;
+ (bool)evaluateOr:(id)arg1 onObj:(id)arg2;
+ (bool)evaluatePredicate:(id)arg1 onObj:(id)arg2;
+ (bool)evaluateRegexOp:(id)arg1 onObj:(id)arg2;
+ (bool)evaluateStringOp:(id)arg1 onObj:(id)arg2;
+ (bool)evaluateTypeOp:(id)arg1 onObj:(id)arg2;
+ (id)fetchObjectAtPath:(id)arg1 from:(id)arg2;
+ (bool)isBoolean:(id)arg1;
+ (bool)isDate:(id)arg1;
+ (bool)isDateTime:(id)arg1;
+ (bool)isNumber:(id)arg1;
+ (bool)isTime:(id)arg1;
+ (bool)obj:(id)arg1 matchesRegex:(id)arg2;
+ (id)parseJSON:(id)arg1;
+ (id)parsePath:(id)arg1;

@end