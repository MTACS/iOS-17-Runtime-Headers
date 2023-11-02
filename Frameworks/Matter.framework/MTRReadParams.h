
@interface MTRReadParams : NSObject <NSCopying> {
    bool  _filterByFabric;
    NSNumber * _minEventNumber;
}

@property (nonatomic, copy) NSNumber *fabricFiltered;
@property (getter=shouldFilterByFabric, nonatomic) bool filterByFabric;
@property (nonatomic, copy) NSNumber *minEventNumber;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fabricFiltered;
- (id)init;
- (id)minEventNumber;
- (void)setFabricFiltered:(id)arg1;
- (void)setFilterByFabric:(bool)arg1;
- (void)setMinEventNumber:(id)arg1;
- (bool)shouldFilterByFabric;
- (void)toReadPrepareParams:(void*)arg1;

@end
