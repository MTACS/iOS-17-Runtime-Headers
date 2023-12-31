
@interface TVPSecureKeyLoader : NSObject {
    <TVPSecureKeyLoaderDelegate> * _delegate;
    TVPPlaybackReportingEventCollection * _eventCollection;
}

@property (nonatomic) <TVPSecureKeyLoaderDelegate> *delegate;
@property (nonatomic, retain) TVPPlaybackReportingEventCollection *eventCollection;

- (void).cxx_destruct;
- (id)delegate;
- (id)eventCollection;
- (void)sendStopRequest;
- (void)setDelegate:(id)arg1;
- (void)setEventCollection:(id)arg1;
- (void)startLoadingCertificateDataForRequest:(id)arg1;
- (void)startLoadingContentIdentifierDataForRequest:(id)arg1;
- (void)startLoadingKeyResponseDataForRequest:(id)arg1;

@end
