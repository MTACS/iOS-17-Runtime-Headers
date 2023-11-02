
@interface BLTReferenceCountedFile : NSObject

+ (id)metadataForFile:(id)arg1;
+ (bool)release:(id)arg1;
+ (bool)retain:(id)arg1;
+ (bool)retain:(id)arg1 fileData:(id)arg2;
+ (bool)writeRetainCount:(long long)arg1 oldMetadata:(id)arg2 to:(id)arg3;

@end
