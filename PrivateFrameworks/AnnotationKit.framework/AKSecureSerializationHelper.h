
@interface AKSecureSerializationHelper : NSObject

+ (id)_decodeAttributedStringFromRTFData:(id)arg1;
+ (void)_decodeRTFTextPropertiesWithSecureCoder:(id)arg1 annotationTextRTF:(id*)arg2 typingAttributesRTF:(id*)arg3;
+ (id)_decodeTextAttributesFromRTFData:(id)arg1;
+ (void)_decodeTextPropertiesForAnnotation:(id)arg1 withSecureCoder:(id)arg2;
+ (id)_encodeAttributedStringAsRTFData:(id)arg1;
+ (id)_encodeTextAttributesAsRTFData:(id)arg1;
+ (id)dataForSecureCodingCompliantObject:(id)arg1 withOptionalKey:(id)arg2;
+ (id)decodeColor:(id)arg1;
+ (id)decodeFont:(id)arg1;
+ (id)decodeTextAttributes:(id)arg1;
+ (void)decodeTextPropertiesOfAnnotation:(id)arg1 withSecureCoder:(id)arg2;
+ (id)encodeColor:(id)arg1;
+ (id)encodeFont:(id)arg1;
+ (id)encodeTextAttributes:(id)arg1;
+ (void)encodeTextPropertiesOfAnnotation:(id)arg1 withCoder:(id)arg2;
+ (id)secureCodingCompliantObjectForData:(id)arg1 ofClasses:(id)arg2 withOptionalKey:(id)arg3;

@end
