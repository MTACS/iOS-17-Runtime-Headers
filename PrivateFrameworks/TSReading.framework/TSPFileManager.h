
@interface TSPFileManager : NSObject

+ (bool)linkFileAtPath:(id)arg1 toPath:(id)arg2;
+ (bool)linkFileAtURL:(id)arg1 toURL:(id)arg2;
+ (bool)linkOrCopyURL:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3 encryptionKey:(id)arg4;
+ (bool)linkOrCopyURL:(id)arg1 toURL:(id)arg2;

@end
