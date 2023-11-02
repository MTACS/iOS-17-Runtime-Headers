
@interface SecXPCHelper : NSObject

+ (id)cleanDictionaryForXPC:(id)arg1;
+ (id)cleanObjectForXPC:(id)arg1;
+ (id)cleanseErrorForXPC:(id)arg1;
+ (id)encodedDataFromError:(id)arg1;
+ (id)errorFromEncodedData:(id)arg1;
+ (id)safeCKErrorPrimitiveClasses;
+ (id)safeErrorClasses;
+ (id)safeErrorCollectionClasses;
+ (id)safeErrorPrimitiveClasses;

@end
