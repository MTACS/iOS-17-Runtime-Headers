
@interface CKVReplicatedEntityEnumerator : NSObject {
    void enumeratedCount;
    void itemType;
    void itemUpdateRecords;
    void iterator;
    void lastStateVector;
    void originAppId;
    void presentClocks;
    void removedClocks;
    void stateEnumerator;
    void stateVector;
    void userId;
}

- (void).cxx_destruct;
- (bool)hasNext;
- (id)init;
- (id)initFor:(id)arg1 lastBookmark:(id)arg2;
- (id)next;
- (id)nextBookmark;

@end
