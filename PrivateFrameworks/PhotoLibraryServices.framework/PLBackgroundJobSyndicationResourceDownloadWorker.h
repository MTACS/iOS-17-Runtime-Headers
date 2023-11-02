
@interface PLBackgroundJobSyndicationResourceDownloadWorker : PLBackgroundJobSyndicationResourceSanitizationWorker

+ (id)syndicationWorkerCriteria;

- (unsigned long long)batchSize;
- (bool)isNetworkAccessAllowed;
- (id)resourceIDsForPrefetchWithLibrary:(id)arg1;

@end
