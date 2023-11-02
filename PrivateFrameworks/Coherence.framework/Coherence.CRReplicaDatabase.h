
@interface Coherence.CRReplicaDatabase : Coherence._CRSQLStore {
    void counterSetStatement;
    void counters;
    void countersQueryStatement;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  replica;
    void replicaQueryStatement;
    void replicaSetStatement;
    void replicaUpdated;
    void updatedCounters;
}

@end
