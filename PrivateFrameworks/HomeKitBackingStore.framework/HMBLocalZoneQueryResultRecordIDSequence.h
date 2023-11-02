
@interface HMBLocalZoneQueryResultRecordIDSequence : HMBLocalZoneQueryResult {
    NSData * _currentSequenceAsData;
    NSData * _lastReturnedSequence;
    NSMutableSet * _returnedIDs;
}

@property (nonatomic, retain) NSData *currentSequenceAsData;
@property (nonatomic, retain) NSData *lastReturnedSequence;
@property (nonatomic, retain) NSMutableSet *returnedIDs;

- (void).cxx_destruct;
- (bool)bindPropertiesToStatement:(struct sqlite3_stmt { }*)arg1 currentSequence:(id)arg2 error:(id*)arg3;
- (id)currentSequenceAsData;
- (id)fetchRow:(id)arg1 error:(id*)arg2;
- (id)fetchRowFromStatement:(struct sqlite3_stmt { }*)arg1 skip:(bool*)arg2 updatedSequenceColumn:(id*)arg3 error:(id*)arg4;
- (id)initWithLocalZone:(id)arg1 statement:(id)arg2 initialSequence:(id)arg3 sequenceBindOffset:(unsigned long long)arg4 arguments:(id)arg5 maximumRowsPerSelect:(unsigned long long)arg6;
- (id)lastReturnedSequence;
- (id)nextObject;
- (id)returnedIDs;
- (void)setCurrentSequenceAsData:(id)arg1;
- (void)setLastReturnedSequence:(id)arg1;
- (void)setReturnedIDs:(id)arg1;

@end
