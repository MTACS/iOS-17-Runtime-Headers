
@interface _ANEHashEncoding : NSObject

+ (id)convertToHexString:(char *)arg1 length:(unsigned long long)arg2;
+ (void)copySHA256For:(id)arg1 toBuffer:(char *)arg2;
+ (unsigned int)hashForString:(id)arg1 seed:(unsigned int)arg2;
+ (id)hexStringForBytes:(char *)arg1 length:(unsigned long long)arg2;
+ (id)hexStringForData:(id)arg1;
+ (id)hexStringForDataArray:(id)arg1;
+ (id)hexStringForString:(id)arg1;

@end
