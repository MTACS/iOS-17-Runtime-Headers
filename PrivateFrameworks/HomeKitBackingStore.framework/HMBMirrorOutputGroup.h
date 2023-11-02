
@interface HMBMirrorOutputGroup : HMFObject {
    unsigned long long  _blockRow;
    HMBProcessingOptions * _options;
}

@property (nonatomic, readonly) unsigned long long blockRow;
@property (nonatomic, readonly) HMBProcessingOptions *options;

- (void).cxx_destruct;
- (unsigned long long)blockRow;
- (id)description;
- (id)initWithBlockRow:(unsigned long long)arg1 options:(id)arg2;
- (id)options;

@end
