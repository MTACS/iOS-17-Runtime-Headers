
@interface NAUAnalyticsEnvelopeTracker : NSObject

+ (id)_contentTypeProperty;
+ (id)_daysSinceSubmissionDateProperty;
+ (void)_registerContentTypes:(id)arg1 withEventName:(id)arg2;
+ (void)_registerEnvelopes:(id)arg1 withEventName:(id)arg2;
+ (void)registerEnvelopeContentTypesAsDropped:(id)arg1 forReason:(unsigned long long)arg2 withError:(id)arg3;
+ (void)registerEnvelopeContentTypesAsPreparedForUpload:(id)arg1;
+ (void)registerEnvelopeContentTypesAsRetainedForUploadRetry:(id)arg1;
+ (void)registerEnvelopeContentTypesAsUploaded:(id)arg1;
+ (void)registerEnvelopeCreationAnticipatedForContentType:(int)arg1;
+ (void)registerEnvelopesAsCreated:(id)arg1;
+ (void)registerEnvelopesAsReceivedByUploader:(id)arg1;
+ (void)registerEnvelopesAsSubmittedToUploader:(id)arg1;

@end
