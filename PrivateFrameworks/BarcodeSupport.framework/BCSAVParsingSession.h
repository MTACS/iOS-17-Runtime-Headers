
@interface BCSAVParsingSession : NSObject {
    NSDictionary * _lastScannedCodeBasicDescriptor;
    double  _lastScannedTime;
    BCSQRCodeParser * _parser;
}

- (void).cxx_destruct;
- (id)_bestObjectForParsing:(id)arg1;
- (bool)_isLikelyLastScannedObject:(id)arg1;
- (bool)_shouldSkipIncomingObject:(id)arg1;
- (double)_temporalStickyFactorForObject:(id)arg1;
- (void)_updateSessionWithMetadataObject:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)updateSessionWithMetadataObjects:(id)arg1;
- (void)updateSessionWithMetadataObjects:(id)arg1 completionHandler:(id /* block */)arg2;

@end
