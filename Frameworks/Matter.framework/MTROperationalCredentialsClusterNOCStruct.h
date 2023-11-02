
@interface MTROperationalCredentialsClusterNOCStruct : NSObject <NSCopying> {
    NSNumber * _fabricIndex;
    NSData * _icac;
    NSData * _noc;
}

@property (nonatomic, copy) NSNumber *fabricIndex;
@property (nonatomic, copy) NSData *icac;
@property (nonatomic, copy) NSData *noc;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fabricIndex;
- (id)icac;
- (id)init;
- (id)noc;
- (void)setFabricIndex:(id)arg1;
- (void)setIcac:(id)arg1;
- (void)setNoc:(id)arg1;

@end
