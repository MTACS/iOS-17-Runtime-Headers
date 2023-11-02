
@interface IMDAttachmentSyndicationUtilities : NSObject

+ (void)_attachmentGUIDForCMMIsSyndicatable:(id)arg1 syndicationIdentifier:(id)arg2 encodedSyndicationRanges:(id)arg3 isSyndicatable:(bool*)arg4 verbose:(bool)arg5;
+ (bool)_attachmentGUIDIsSyndicatable:(id)arg1 syndicationIdentifier:(id)arg2 attachmentUTI:(id)arg3 attributedBody:(id)arg4 encodedSyndicationRanges:(id)arg5 isCMM:(bool)arg6 verbose:(bool)arg7;
+ (unsigned long long)_attachmentSyndicationTypeForAttachmentGUID:(id)arg1 syndicationIdentifier:(id)arg2 attachmentUTI:(id)arg3 attributedBody:(id)arg4 encodedSyndicationRanges:(id)arg5 isCommSafetySensitive:(bool)arg6 verbose:(bool)arg7;
+ (id)_syndicationIdentifierForAttachmentGUID:(id)arg1 messageGUID:(id)arg2 attributedBody:(id)arg3 verbose:(bool)arg4;
+ (bool)attachmentRecordIsSyndicatable:(id)arg1 verbose:(bool)arg2;
+ (unsigned long long)syndicationTypeForAttachmentRecord:(id)arg1 verbose:(bool)arg2;

@end
