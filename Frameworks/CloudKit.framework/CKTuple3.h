
@interface CKTuple3 : CKTuple {
    id  _v1;
    id  _v2;
    id  _v3;
}

@property (nonatomic, retain) id v1;
@property (nonatomic, retain) id v2;
@property (nonatomic, retain) id v3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithObject1:(id)arg1 object2:(id)arg2 object3:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)setV1:(id)arg1;
- (void)setV2:(id)arg1;
- (void)setV3:(id)arg1;
- (id)v1;
- (id)v2;
- (id)v3;

@end
