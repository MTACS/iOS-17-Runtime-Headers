
@interface MSRAPRecord : MapsSync.MapsSyncObject {
    void _clientRevision;
    void _contentData;
    void _countryCode;
    void _positionIndex;
    void _rapResponse;
    void _reportId;
    void _status;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _statusLastUpdatedDate;
    void _summary;
    void _type;
}

@property (nonatomic) short clientRevision;
@property (nonatomic, readonly) MSCommunityID *communityID;
@property (nonatomic, copy) NSData *contentData;
@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic) long long positionIndex;
@property (nonatomic, copy) NSData *rapResponse;
@property (nonatomic, copy) NSString *reportId;
@property (nonatomic) short status;
@property (nonatomic, copy) NSDate *statusLastUpdatedDate;
@property (nonatomic, copy) NSString *summary;
@property (nonatomic) short type;

+ (Class)managedClass;

- (void).cxx_destruct;
- (short)clientRevision;
- (id)communityID;
- (id)contentData;
- (id)countryCode;
- (id)initWithObject:(id)arg1 store:(id)arg2;
- (id)initWithStore:(id)arg1 clientRevision:(short)arg2 contentData:(id)arg3 countryCode:(id)arg4 positionIndex:(long long)arg5 rapResponse:(id)arg6 reportId:(id)arg7 status:(short)arg8 statusLastUpdatedDate:(id)arg9 summary:(id)arg10 type:(short)arg11;
- (long long)positionIndex;
- (id)rapResponse;
- (id)reportId;
- (void)setClientRevision:(short)arg1;
- (bool)setCommunityID:(id)arg1 error:(id*)arg2;
- (void)setContentData:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setPositionIndex:(long long)arg1;
- (void)setPropertiesUnsafeWithManagedObject:(id)arg1;
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
