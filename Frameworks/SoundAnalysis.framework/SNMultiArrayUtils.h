
@interface SNMultiArrayUtils : NSObject

+ (bool)checkMultiArrayHasStandardStrides:(id)arg1;
+ (id)numberAtOffsetInMultiArray:(id)arg1 offset:(long long)arg2;
+ (id)numberFromMultiArrayDataElement:(void*)arg1 dataType:(long long)arg2;
+ (void*)pointerToOffsetInMultiArray:(id)arg1 offset:(long long)arg2;
+ (void*)pointerToOffsetInMultiArrayData:(void*)arg1 offset:(long long)arg2 dataType:(long long)arg3;
+ (id)prependUnitaryDimensionsToMultiArray:(id)arg1 count:(long long)arg2 error:(id*)arg3;
+ (id)prependUnitaryDimensionsToMultiArray:(id)arg1 totalDimensionCount:(long long)arg2 error:(id*)arg3;
+ (id)shapedNumberArrayFromMultiArray:(id)arg1;
+ (id)standardStridesForShape:(id)arg1;
+ (id)unshapedNumberArrayFromMultiArray:(id)arg1;
+ (bool)validateMultiArrayHasStandardStrides:(id)arg1 error:(id*)arg2;

- (id)init;

@end
