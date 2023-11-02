
@interface ICAddAttachmentsManager : NSObject

+ (id)sharedManager;

- (void)saveAttachments:(id)arg1 toNote:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4;
- (void)saveAttachments:(id)arg1 toNote:(id)arg2 textBefore:(id)arg3 textAfter:(id)arg4 fetchFirst:(bool)arg5;
- (id)saveAttachmentsToNewNote:(id)arg1 inFolder:(id)arg2 isSystemPaper:(bool)arg3 textBefore:(id)arg4 textAfter:(id)arg5;
- (unsigned int)styleForTitleLength:(long long)arg1;

@end
