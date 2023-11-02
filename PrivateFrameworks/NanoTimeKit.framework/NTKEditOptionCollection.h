
@interface NTKEditOptionCollection : NSObject {
    unsigned long long  _collectionType;
    NSString * _localizedName;
    long long  _mode;
    NSArray * _options;
    NSString * _slot;
}

@property (nonatomic) unsigned long long collectionType;
@property (nonatomic, copy) NSString *localizedName;
@property (nonatomic) long long mode;
@property (nonatomic, copy) NSArray *options;
@property (nonatomic, readonly) NSString *optionsDescription;
@property (nonatomic, copy) NSString *slot;
@property (nonatomic, readonly) long long swatchStyle;

+ (id)editOptionCollectionWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;

- (void).cxx_destruct;
- (unsigned long long)collectionType;
- (id)filteredCollectionForDevice:(id)arg1;
- (id)filteredCollectionWithObjectsPassingTest:(id /* block */)arg1;
- (id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4;
- (id)initWithEditMode:(long long)arg1 localizedName:(id)arg2 options:(id)arg3 collectionType:(unsigned long long)arg4 slot:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (long long)mode;
- (id)options;
- (id)optionsDescription;
- (void)setCollectionType:(unsigned long long)arg1;
- (void)setLocalizedName:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setOptions:(id)arg1;
- (void)setSlot:(id)arg1;
- (id)slot;
- (long long)swatchStyle;

@end
