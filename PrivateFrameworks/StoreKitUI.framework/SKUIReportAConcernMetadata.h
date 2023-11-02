
@interface SKUIReportAConcernMetadata : NSObject {
    NSString * _details;
    long long  _itemIdentifier;
    NSURL * _reportConcernURL;
    SKUIReportAConcernReason * _selectedReason;
}

@property (nonatomic, copy) NSString *details;
@property (nonatomic) long long itemIdentifier;
@property (nonatomic, copy) NSURL *reportConcernURL;
@property (nonatomic, retain) SKUIReportAConcernReason *selectedReason;

- (void).cxx_destruct;
- (id)details;
- (long long)itemIdentifier;
- (id)reportConcernURL;
- (id)selectedReason;
- (void)setDetails:(id)arg1;
- (void)setItemIdentifier:(long long)arg1;
- (void)setReportConcernURL:(id)arg1;
- (void)setSelectedReason:(id)arg1;

@end
