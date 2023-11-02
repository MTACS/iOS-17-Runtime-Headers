
@interface cNodeRestriction : NSObject <RestrictionProtocol> {
    NSMutableArray * _restrictArray;
    int  restrictId;
    unsigned int  ulType;
    unsigned int  weight;
}

@property (retain) NSMutableArray *restrictArray;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (int)appendRestriction:(id)arg1;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;
- (id)initWithType:(unsigned int)arg1 Weight:(unsigned int)arg2;
- (unsigned int)nodeCount;
- (id)restrictArray;
- (int)restrictId;
- (int)restrictionNumber;
- (void)setRestrictArray:(id)arg1;
- (void)setRestrictId:(int)arg1;
- (void)setUlType:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)ulType;
- (unsigned int)weight;

@end
