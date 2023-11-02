
@interface FedStatsCategoricalTypeSubcategory : NSObject {
    unsigned long long  _index;
    NSString * _superCategory;
}

@property (nonatomic, readonly) unsigned long long index;
@property (nonatomic, readonly, copy) NSString *superCategory;

+ (id)categoryWithSuperCategory:(id)arg1 index:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)index;
- (id)initWithSuperCategory:(id)arg1 index:(unsigned long long)arg2;
- (id)superCategory;

@end
