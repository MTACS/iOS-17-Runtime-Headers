
@interface CESRSamplingDimension : NSObject {
    NSString * _asrLocale;
}

@property (nonatomic, readonly, copy) NSString *asrLocale;

- (void).cxx_destruct;
- (id)asrLocale;
- (id)description;
- (id)initWithAsrLocale:(id)arg1;
- (bool)matches:(id)arg1;

@end
