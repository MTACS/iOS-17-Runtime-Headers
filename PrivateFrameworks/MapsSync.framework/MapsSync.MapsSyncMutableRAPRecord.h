
@interface MapsSync.MapsSyncMutableRAPRecord : MapsSync.MapsSyncMutableBaseItem {
    void _proxy;
}

@property (nonatomic) short clientRevision;
@property (nonatomic, retain) _TtC8MapsSync19MapsSyncCommunityID *communityID;
@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSData *rapResponse;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;

- (void).cxx_destruct;
- (short)clientRevision;
- (id)communityID;
- (id)contentData;
- (id)countryCode;
- (id)initWithProxyObject:(id)arg1;
- (id)rapResponse;
- (id)reportId;
- (void)setClientRevision:(short)arg1;
- (void)setCommunityID:(id)arg1;
- (void)setContentData:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setRapResponse:(id)arg1;
- (void)setReportId:(id)arg1;
- (void)setStatus:(short)arg1;
- (void)setStatusLastUpdatedDate:(id)arg1;
- (void)setSummary:(id)arg1;
- (void)setType:(short)arg1;
- (short)status;
- (id)statusLastUpdatedDate;
- (id)summary;
- (short)type;

@end
