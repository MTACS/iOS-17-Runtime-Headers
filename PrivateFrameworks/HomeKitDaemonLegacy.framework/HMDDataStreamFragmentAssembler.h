
@interface HMDDataStreamFragmentAssembler : HMFObject {
    HMDDataStreamFragment * _assembledFragment;
    NSNumber * _currentChunkSequenceNumber;
    NSMutableData * _data;
    NSNumber * _sequenceNumber;
    NSString * _type;
}

@property (copy) HMDDataStreamFragment *assembledFragment;
@property (copy) NSNumber *currentChunkSequenceNumber;
@property (readonly, copy) NSMutableData *data;
@property (readonly, copy) NSNumber *sequenceNumber;
@property (readonly, copy) NSString *type;

- (void).cxx_destruct;
- (bool)addFragmentChunk:(id)arg1 error:(id*)arg2;
- (id)assembledFragment;
- (id)attributeDescriptions;
- (id)currentChunkSequenceNumber;
- (id)data;
- (id)initWithSequenceNumber:(id)arg1 type:(id)arg2;
- (id)sequenceNumber;
- (void)setAssembledFragment:(id)arg1;
- (void)setCurrentChunkSequenceNumber:(id)arg1;
- (id)type;

@end
