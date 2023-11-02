
@interface PPContactNameRecordLoadingDelegate : PPRecordLoadingDelegate {
    id /* block */  _contactNameRecordsCompletion;
    id /* block */  _contactNameRecordsHandler;
    id /* block */  _contactNameRecordsSetup;
    id /* block */  _recentContactNameRecordsCompletion;
    id /* block */  _recentContactNameRecordsHandler;
    id /* block */  _recentContactNameRecordsSetup;
    id /* block */  _resetContactNameRecordData;
}

@property (nonatomic, copy) id /* block */ contactNameRecordsCompletion;
@property (nonatomic, copy) id /* block */ contactNameRecordsHandler;
@property (nonatomic, copy) id /* block */ contactNameRecordsSetup;
@property (nonatomic, copy) id /* block */ recentContactNameRecordsCompletion;
@property (nonatomic, copy) id /* block */ recentContactNameRecordsHandler;
@property (nonatomic, copy) id /* block */ recentContactNameRecordsSetup;
@property (nonatomic, copy) id /* block */ resetContactNameRecordData;

- (void).cxx_destruct;
- (id /* block */)contactNameRecordsCompletion;
- (id /* block */)contactNameRecordsHandler;
- (id /* block */)contactNameRecordsSetup;
- (id)description;
- (id)initWithName:(id)arg1;
- (id /* block */)recentContactNameRecordsCompletion;
- (id /* block */)recentContactNameRecordsHandler;
- (id /* block */)recentContactNameRecordsSetup;
- (void)recentRecordLoadingCompletion;
- (unsigned char)recentRecordLoadingHandler:(id)arg1;
- (unsigned char)recentRecordLoadingSetup;
- (void)recordLoadingCompletion;
- (unsigned char)recordLoadingHandler:(id)arg1;
- (unsigned char)recordLoadingSetup;
- (id /* block */)resetContactNameRecordData;
- (void)resetRecordData;
- (void)setContactNameRecordsCompletion:(id /* block */)arg1;
- (void)setContactNameRecordsHandler:(id /* block */)arg1;
- (void)setContactNameRecordsSetup:(id /* block */)arg1;
- (void)setRecentContactNameRecordsCompletion:(id /* block */)arg1;
- (void)setRecentContactNameRecordsHandler:(id /* block */)arg1;
- (void)setRecentContactNameRecordsSetup:(id /* block */)arg1;
- (void)setResetContactNameRecordData:(id /* block */)arg1;

@end
