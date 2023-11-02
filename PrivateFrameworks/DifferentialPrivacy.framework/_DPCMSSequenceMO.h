
@interface _DPCMSSequenceMO : _DPCMSRecordMO

@property (nonatomic, retain) NSString *plainSequence;
@property (nonatomic, retain) NSData *sequence;
@property (nonatomic) short sequenceHashIndex;

@end
