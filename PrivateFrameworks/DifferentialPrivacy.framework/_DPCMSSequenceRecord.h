
@interface _DPCMSSequenceRecord : _DPCMSRecord {
    NSString * _plainSequence;
    NSData * _sequence;
    short  _sequenceHashIndex;
}

@property (nonatomic, copy) NSString *plainSequence;
@property (nonatomic, retain) NSData *sequence;
@property (nonatomic) short sequenceHashIndex;

+ (id)entityName;

- (void).cxx_destruct;
- (bool)copyFromManagedObject:(id)arg1;
- (bool)copyToManagedObject:(id)arg1;
- (id)description;
- (id)initWithKey:(id)arg1 plainSequence:(id)arg2 sequence:(id)arg3 sequenceHashIndex:(unsigned short)arg4 creationDate:(double)arg5 submitted:(bool)arg6 objectId:(id)arg7;
- (id)jsonString;
- (id)plainSequence;
- (id)sequence;
- (short)sequenceHashIndex;
- (void)setPlainSequence:(id)arg1;
- (void)setSequence:(id)arg1;
- (void)setSequenceHashIndex:(short)arg1;

@end
