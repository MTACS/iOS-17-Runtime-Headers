
@interface _OSLogCatalogFilter : NSObject <NSPredicateVisitor> {
    bool  _hasItems;
    bool  _hasSharedCacheItems;
    NSMutableSet * _pidAccept;
    NSMutableSet * _processLookupSubstr;
    NSMutableSet * _senderLookupSubstr;
    NSMutableSet * _subsysSubstrAccept;
    NSMutableSet * _uuidAccept;
    char * _uuidtext_path;
}

- (void).cxx_destruct;
- (void)addProcessID:(id)arg1;
- (void)addProcessLookupSubstr:(id)arg1;
- (void)addSenderLookupSubstr:(id)arg1;
- (void)addSubsystem:(id)arg1;
- (void)addUUID:(id)arg1;
- (bool)containsProcessID:(id)arg1;
- (bool)containsProcessLookupSubstr:(id)arg1;
- (bool)containsSenderLookupSubstr:(id)arg1;
- (bool)containsSubsystemSubstr:(id)arg1;
- (bool)containsUUID:(id)arg1;
- (void)dealloc;
- (void)generateUUIDSet;
- (void)handleDSOFile:(struct _ftsent { struct _ftsent {} *x1; struct _ftsent {} *x2; struct _ftsent {} *x3; long long x4; void *x5; char *x6; char *x7; int x8; int x9; unsigned short x10; unsigned short x11; unsigned long long x12; int x13; unsigned short x14; short x15; unsigned short x16; unsigned short x17; unsigned short x18; struct stat {} *x19; BOOL x20[1]; }*)arg1;
- (id)initWithPredicate:(id)arg1 collection:(id)arg2;
- (bool)isKeptCatalog:(struct catalog_s { struct catalog_hdr_s { unsigned short x_1_1_1; unsigned long long x_1_1_2; } x1; struct os_trace_uuid_map_s {} *x2; struct os_trace_str_map_s {} *x3; unsigned long long x4; struct os_procinfo_map_s {} *x5; unsigned long long x6; unsigned long long x7; struct subchunk_queue_t { struct catalog_subchunk_s {} *x_8_1_1; struct catalog_subchunk_s {} **x_8_1_2; } x8; unsigned long long x9; }*)arg1;
- (void)processComparisonPredicate:(id)arg1;
- (void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2;
- (void)readDSCUUIDs;
- (void)readDSOUUIDs;
- (void)visitPredicate:(id)arg1;
- (void)visitPredicateExpression:(id)arg1;
- (void)visitPredicateOperator:(id)arg1;

@end
