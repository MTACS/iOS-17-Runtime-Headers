
@interface ASVTextureConverter : NSObject

@property (nonatomic, readonly) long long converterType;

+ (id)defaultTextureConverters;
+ (id)newConverterOfType:(long long)arg1;
+ (id)preferredConverterFromConverters:(id)arg1 forTextureDescription:(id)arg2;

- (unsigned long long)alignUp:(unsigned long long)arg1 toAlignment:(unsigned long long)arg2;
- (bool)canConvertTextureWithDescription:(id)arg1;
- (long long)converterType;
- (struct { unsigned long long x1; unsigned long long x2; })estimatedMemoryDeltaForTextureWithDescription:(id)arg1;

@end
