
@interface MapsSync.MapsSyncRAPRecord : MapsSync.MapsSyncBaseItem {
    void _clientRevision;
    void _communityId;
    void _contentData;
    void _countryCode;
    void _rapResponse;
    void _reportId;
    void _status;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _statusLastUpdatedDate;
    void _summary;
    void _type;
}

@property (nonatomic, readonly) _TtC8MapsSync19MapsSyncCommunityID *communityId;
@property (nonatomic, readonly) NSData *contentData;
@property (nonatomic, readonly) NSString *countryCode;
@property (nonatomic, readonly) NSData *rapResponse;
@property (nonatomic, readonly) NSString *reportId;
@property (nonatomic, readonly) short status;
@property (nonatomic, readonly) NSDate *statusLastUpdatedDate;
@property (nonatomic, readonly) NSString *summary;
@property (nonatomic, readonly) short type;

- (void).cxx_destruct;
- (void)addEditWithBlock:(id /* block */)arg1;
- (id)communityId;
- (id)contentData;
- (id)countryCode;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (id)rapResponse;
- (id)reportId;
- (void)setPropertiesWithObject:(id)arg1;
- (short)status;
- (id)statusLastUpdatedDate;
- (id)summary;
- (short)type;

@end
