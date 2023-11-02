
@interface cRestriction : NSObject <RestrictionProtocol> {
    NSObject<RestrictionProtocol> * _restrictionObj;
    int  restrictId;
    unsigned int  ulType;
    unsigned int  weight;
}

@property int restrictId;
@property (retain) NSObject<RestrictionProtocol> *restrictionObj;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)initWithType:(unsigned int)arg1 Weight:(unsigned int)arg2;
- (int)restrictId;
- (id)restrictionObj;
- (void)setRestrictId:(int)arg1;
- (void)setRestriction:(id)arg1;
- (void)setRestrictionObj:(id)arg1;
- (void)setUlType:(unsigned int)arg1;
- (void)setWeight:(unsigned int)arg1;
- (unsigned int)ulType;
- (unsigned int)weight;

@end
