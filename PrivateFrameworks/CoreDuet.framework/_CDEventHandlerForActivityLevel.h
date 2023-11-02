
@interface _CDEventHandlerForActivityLevel : NSObject <_CDEventHandlerDelegate> {
    _CDDataCollectionAnonymizer * _anonymizer;
    _CDFileUtility * _utility;
}

@property (nonatomic, retain) _CDDataCollectionAnonymizer *anonymizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) _CDFileUtility *utility;

- (void).cxx_destruct;
- (id)anonymizer;
- (void)eventHandler:(id)arg1 withFileHandle:(id)arg2;
- (id)init;
- (void)setAnonymizer:(id)arg1;
- (void)setUtility:(id)arg1;
- (id)utility;

@end
