
@interface _ICPortraitLexiconSource : NSObject <_ICFeedbackAccepting, _ICLexiconSourcing> {
    PPContactNameRecordLoadingDelegate * _contactDelegate;
    PPContactStore * _contactStore;
    _ICLexiconManager * _manager;
    PPNamedEntityRecordLoadingDelegate * _namedEntityDelegate;
    PPNamedEntityStore * _namedEntityStore;
}

- (void).cxx_destruct;
- (id)_makeContactDelegate;
- (id)_makeNamedEntityDelegate;
- (id)_makePPNamedEntityStore;
- (void)hibernate;
- (id)init;
- (void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
- (void)startLoadingWithManager:(id)arg1;
- (void)warmUp;

@end
