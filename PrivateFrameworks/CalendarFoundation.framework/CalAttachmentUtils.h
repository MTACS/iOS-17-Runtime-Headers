
@interface CalAttachmentUtils : NSObject

+ (id)_knownTLDForHostname:(id)arg1;
+ (id)_stripSubdomain:(id)arg1;
+ (id)attachmentContainerForSourceIdentifier:(id)arg1 calendarDataContainer:(id)arg2;
+ (id)attachmentContainerWithBaseURL:(id)arg1;
+ (bool)attachmentURL:(id)arg1 matchesServerURL:(id)arg2;
+ (id)getFileSizeForPath:(id)arg1 fileManager:(id)arg2 error:(id*)arg3;
+ (id)legacyAttachmentContainerWithBaseURL:(id)arg1;
+ (id)legacyCalendarDataContainer;
+ (id)localRelativePathForLocalAbsoluteURL:(id)arg1 localBaseURL:(id)arg2;
+ (id)localURLForAttachmentWithRelativePath:(id)arg1 baseURL:(id)arg2;

@end
