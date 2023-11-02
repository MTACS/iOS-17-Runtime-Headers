
@interface GEMagicKit : NSObject

+ (id)magicForData:(id)arg1;
+ (id)magicForData:(id)arg1 decompress:(bool)arg2;
+ (id)magicForFileAtPath:(id)arg1;
+ (id)magicForFileAtPath:(id)arg1 decompress:(bool)arg2;
+ (id)magicForFileAtURL:(id)arg1;
+ (id)magicForFileAtURL:(id)arg1 decompress:(bool)arg2;
+ (id)magicForObject:(id)arg1 decompress:(bool)arg2;
+ (id)rawMagicOutputForObject:(id)arg1 cookie:(struct magic_set { }*)arg2 flags:(int)arg3;
+ (struct magic_set { }*)sharedMagicCookie;
+ (id)typeHierarchyForType:(id)arg1;

@end
