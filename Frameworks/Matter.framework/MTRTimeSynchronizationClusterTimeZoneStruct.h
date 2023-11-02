
@interface MTRTimeSynchronizationClusterTimeZoneStruct : NSObject <NSCopying> {
    NSString * _name;
    NSNumber * _offset;
    NSNumber * _validAt;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSNumber *offset;
@property (nonatomic, copy) NSNumber *validAt;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)name;
- (id)offset;
- (void)setName:(id)arg1;
- (void)setOffset:(id)arg1;
- (void)setValidAt:(id)arg1;
- (id)validAt;

@end
