
@interface _DPOBHSequenceMO : _DPOBHRecordMO

@property (nonatomic, copy) NSString *plainSequence;
@property (nonatomic) long long sequenceBitPosition;
@property (nonatomic) bool sequenceBitValue;

+ (id)fetchRequest;

@end
