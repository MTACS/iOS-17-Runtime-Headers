
@interface reuseWhereRestriction : NSObject <RestrictionProtocol> {
    unsigned int  _resuseWhereID;
    int  restrictId;
    unsigned int  ulType;
    unsigned int  weight;
}

@property int restrictId;
@property unsigned int resuseWhereID;
@property unsigned int ulType;
@property unsigned int weight;

- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;
- (id)initWithReuseWhereID:(unsigned int)arg1 Weight:(unsigned int)arg2;
- (int)restrictId;
- (int)restrictionNumber;
- (unsigned int)resuseWhereID;
- (void)setRestrictId:(int)arg1;
- (void)setResuseWhereID:(unsigned int)arg1;
- (void)setUlType:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)ulType;
- (unsigned int)weight;

@end
