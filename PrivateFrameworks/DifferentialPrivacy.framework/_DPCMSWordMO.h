
@interface _DPCMSWordMO : _DPCMSSequenceMO

@property (nonatomic, retain) NSData *fragment;
@property (nonatomic) short fragmentHashIndex;
@property (nonatomic) short fragmentPosition;
@property (nonatomic, retain) NSString *plainFragment;

@end
