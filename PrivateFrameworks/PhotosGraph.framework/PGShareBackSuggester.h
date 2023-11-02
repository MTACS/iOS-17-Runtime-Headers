
@interface PGShareBackSuggester : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
    PHPhotoLibrary * _photoLibrary;
    unsigned short  _positiveProcessingValue;
    NSArray * _sources;
}

@property (nonatomic, readonly) unsigned short positiveProcessingValue;

+ (id)momentUUIDsForExtendedUniversalDateInterval:(id)arg1 suggesterInputs:(id)arg2 momentFetchOptions:(id)arg3;
+ (id)shareBackSuggesterForCMMWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2 graph:(id)arg3;
+ (id)shareBackSuggesterForExternalAssetProcessingWithLoggingConnection:(id)arg1 photoLibrary:(id)arg2 graph:(id)arg3;
+ (id)shareBackSuggesterForSyndicationWithLoggingConnection:(id)arg1 syndicationPhotoLibrary:(id)arg2 systemPhotoLibrary:(id)arg3 graph:(id)arg4;
+ (id)shareBackSuggesterForSyndicationWithLoggingConnection:(id)arg1 syndicationPhotoLibrary:(id)arg2 systemPhotoLibrary:(id)arg3 graph:(id)arg4 faceIdentification:(id)arg5;

- (void).cxx_destruct;
- (id)initWithSources:(id)arg1 positiveProcessingValue:(unsigned short)arg2 loggingConnection:(id)arg3 photoLibrary:(id)arg4 graph:(id)arg5;
- (unsigned short)positiveProcessingValue;
- (id)suggesterResultsForInputs:(id)arg1 inGraph:(id)arg2 error:(id*)arg3;
- (id)suggesterResultsForUnclusteredSuggesterInputs:(id)arg1 inGraph:(id)arg2 error:(id*)arg3;

@end
