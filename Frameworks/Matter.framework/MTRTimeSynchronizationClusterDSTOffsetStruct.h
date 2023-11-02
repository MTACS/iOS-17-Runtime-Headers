
@interface MTRTimeSynchronizationClusterDSTOffsetStruct : NSObject <NSCopying> {
    NSNumber * _offset;
    NSNumber * _validStarting;
    NSNumber * _validUntil;
}

@property (nonatomic, copy) NSNumber *offset;
@property (nonatomic, copy) NSNumber *validStarting;
@property (nonatomic, copy) NSNumber *validUntil;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)offset;
- (void)setOffset:(id)arg1;
- (void)setValidStarting:(id)arg1;
- (void)setValidUntil:(id)arg1;
- (id)validStarting;
- (id)validUntil;

@end
