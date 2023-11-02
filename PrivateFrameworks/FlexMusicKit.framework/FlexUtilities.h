
@interface FlexUtilities : NSObject

+ (id)_decodeItem:(id)arg1 asClass:(Class)arg2;
+ (id)_songFormatForBundleAtPath:(id)arg1;
+ (id)backendForSongBundleURL:(id)arg1;
+ (id)decodeItemsInArray:(id)arg1 asClass:(Class)arg2;
+ (id)decodeItemsInDict:(id)arg1 asClass:(Class)arg2;
+ (id)encodeItemsInArray:(id)arg1;
+ (id)encodeItemsInDict:(id)arg1;
+ (id)pathToBundledResourceWithName:(id)arg1;
+ (id)songsFoundInDeepScanOfDirectory:(id)arg1;

@end
