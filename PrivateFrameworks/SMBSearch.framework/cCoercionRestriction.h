
@interface cCoercionRestriction : NSObject <RestrictionProtocol> {
    int  _cop;
    unsigned int  _fValue;
    NSObject<RestrictionProtocol> * _restrictionObj;
    int  restrictId;
    unsigned int  ulType;
    unsigned int  weight;
}

@property int cop;
@property unsigned int fValue;
@property int restrictId;
@property (retain) NSObject<RestrictionProtocol> *restrictionObj;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (int)cop;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (unsigned int)fValue;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;
- (id)initWithOp:(int)arg1 FValue:(unsigned int)arg2 Weight:(unsigned int)arg3;
- (int)restrictId;
- (int)restrictionNumber;
- (id)restrictionObj;
- (void)setCop:(int)arg1;
- (void)setFValue:(unsigned int)arg1;
- (void)setRestrictId:(int)arg1;
- (void)setRestriction:(id)arg1;
- (void)setRestrictionObj:(id)arg1;
- (void)setUlType:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)ulType;
- (unsigned int)weight;

@end
