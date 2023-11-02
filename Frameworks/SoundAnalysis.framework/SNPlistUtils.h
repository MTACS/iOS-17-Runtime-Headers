
@interface SNPlistUtils : NSObject

+ (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeFromPlist:(id)arg1;
+ (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })CMTimeRangeFromPlist:(id)arg1;
+ (bool)checkAllItemsArePlistSerializableInCollection:(id)arg1;
+ (id)plistArrayFromItemsInSerializableCollection:(id)arg1 error:(id*)arg2;
+ (id)plistFromCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
+ (id)plistFromCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
+ (id)safePlistArrayFromItemsInSerializableCollection:(id)arg1 error:(id*)arg2;
+ (bool)validateAllItemsArePlistSerializableInCollection:(id)arg1 error:(id*)arg2;

- (id)init;

@end
