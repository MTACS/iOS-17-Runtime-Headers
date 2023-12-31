
@interface PXBasicTileUserData : NSObject {
    PXViewSpec * _viewSpec;
}

@property (nonatomic, readonly) PXViewSpec *viewSpec;

+ (id)userDataWithViewSpec:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithViewSpec:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)viewSpec;

@end
