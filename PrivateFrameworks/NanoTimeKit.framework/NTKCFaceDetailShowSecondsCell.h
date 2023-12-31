
@interface NTKCFaceDetailShowSecondsCell : NTKCFaceDetailToggleCell {
    NTKEditOptionCollection * _collection;
    long long  _mode;
}

@property (nonatomic, readonly) NTKEditOptionCollection *collection;
@property (nonatomic, readonly) long long mode;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)collection;
- (id)initWithCollection:(id)arg1;
- (long long)mode;

@end
