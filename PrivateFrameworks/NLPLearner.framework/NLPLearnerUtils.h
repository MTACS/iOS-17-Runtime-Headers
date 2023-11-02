
@interface NLPLearnerUtils : NSObject

+ (bool)checkVietnameseCharactersInText:(id)arg1;
+ (id)getAttachmentURLByName:(id)arg1 attachments:(id)arg2 error:(id*)arg3;
+ (id)getAttachmentURLByName:(id)arg1 inDirectory:(id)arg2 error:(id*)arg3;
+ (void)initialize;
+ (bool)isInternalInstall;
+ (id)languageForText:(id)arg1;
+ (id)languageForText:(id)arg1 checkVietnamese:(bool)arg2;
+ (id)messageContentForEvent:(id)arg1;
+ (id)messageContentForEvent:(id)arg1 andLanguage:(id)arg2;
+ (void)removeTemporaryFile:(id)arg1;
+ (unsigned long long)sourceForEvent:(id)arg1;

@end
