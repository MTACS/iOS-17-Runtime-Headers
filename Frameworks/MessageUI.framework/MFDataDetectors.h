
@interface MFDataDetectors : NSObject

+ (Class)_DDURLifierClass;
+ (id)sharedDetectionController;
+ (bool)urlIfyNode:(id)arg1;
+ (bool)urlIfyNode:(id)arg1 phoneNumberTypes:(unsigned long long)arg2;
+ (id)urlMatchesForString:(id)arg1;
+ (id)urlMatchesForString:(id)arg1 includingTel:(bool)arg2;

@end
