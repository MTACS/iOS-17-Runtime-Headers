
@interface SSDataDetectorResultGenerator : NSObject {
    bool  _canceled;
    long long  _ddJobIdentifier;
}

- (id)buildCardSectionForEmail:(id)arg1;
- (id)buildCardSectionForPhoneNumber:(id)arg1;
- (id)buildPersonBasedSubtitleButtonItemWithTitle:(id)arg1 person:(id)arg2;
- (id)buildResultSectionForTrackingNumber:(id)arg1 carrier:(id)arg2 url:(id)arg3 queryId:(unsigned long long)arg4;
- (id)buildResultSectionWithCardSections:(id)arg1 queryId:(unsigned long long)arg2 resultBundleId:(id)arg3 sectionTitle:(id)arg4 completion:(id)arg5;
- (void)buildResultSectionsForDateTimeFromResult:(id)arg1 querString:(id)arg2 completion:(id /* block */)arg3 queryId:(unsigned long long)arg4 searchString:(id)arg5;
- (void)buildResultSectionsForEmailFromResult:(id)arg1 completion:(id /* block */)arg2 queryId:(unsigned long long)arg3;
- (void)buildResultSectionsForPhoneNumberFromResult:(id)arg1 completion:(id /* block */)arg2 queryId:(unsigned long long)arg3;
- (void)buildResultSectionsForTrackingNumberFromResult:(id)arg1 completion:(id /* block */)arg2 queryId:(unsigned long long)arg3;
- (id)buttonItemWithTitle:(id)arg1 symbol:(id)arg2 command:(id)arg3;
- (void)cancel;
- (void)getResultSections:(id)arg1 queryId:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)personWithPhoneNumber:(id)arg1 email:(id)arg2;

@end
