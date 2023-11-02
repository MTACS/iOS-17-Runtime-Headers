
@interface FCPrivateZoneFeedDescriptor : FCFeedDescriptor {
    long long  _feedType;
    FCPrivateDataController * _privateDataController;
}

@property (nonatomic, retain) FCPrivateDataController *privateDataController;

- (void).cxx_destruct;
- (id)backingHeadlineIDs;
- (long long)feedType;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithPrivateDataController:(id)arg1 identifier:(id)arg2 feedType:(long long)arg3;
- (id)privateDataController;
- (void)setPrivateDataController:(id)arg1;
- (id)streamOfLatestHeadlinesWithContext:(id)arg1;

@end
