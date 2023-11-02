
@interface HMBLocalSQLContextRowBlock : HMFObject {
    unsigned long long  _blockRow;
    NSData * _optionsData;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long blockRow;
@property (nonatomic, readonly) NSData *optionsData;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (unsigned long long)blockRow;
- (id)initWithBlockRow:(unsigned long long)arg1 type:(unsigned long long)arg2 options:(id)arg3;
- (id)optionsData;
- (unsigned long long)type;

@end
