
@interface PGGraphMomentChange : PGGraphChange {
    NSString * _momentUUID;
    unsigned long long  _updateTypes;
}

@property (nonatomic, readonly) NSString *momentUUID;
@property (nonatomic, readonly) unsigned long long updateTypes;

- (void).cxx_destruct;
- (id)description;
- (id)initWithMomentUUID:(id)arg1 updateTypes:(unsigned long long)arg2;
- (void)mergeChange:(id)arg1;
- (id)momentUUID;
- (unsigned long long)type;
- (unsigned long long)updateTypes;

@end
