
@interface cPropertyRestriction : NSObject <RestrictionProtocol> {
    unsigned int  _lcid;
    cbaseVariant * _prVal;
    fullPropSpec * _propSpec;
    unsigned int  _relOp;
    int  restrictId;
    unsigned int  ulType;
    unsigned int  weight;
}

@property unsigned int lcid;
@property (retain) cbaseVariant *prVal;
@property (retain) fullPropSpec *propSpec;
@property unsigned int relOp;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;
- (id)initWithRelop:(unsigned int)arg1 Weight:(unsigned int)arg2;
- (unsigned int)lcid;
- (id)prVal;
- (id)propSpec;
- (unsigned int)relOp;
- (int)restrictId;
- (int)restrictionNumber;
- (void)setLcid:(unsigned int)arg1;
- (void)setPrVal:(id)arg1;
- (void)setPropSpec:(id)arg1;
- (void)setRelOp:(unsigned int)arg1;
- (void)setRestrictId:(int)arg1;
- (void)setUlType:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)ulType;
- (unsigned int)weight;

@end
