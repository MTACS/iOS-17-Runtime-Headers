
@interface PLPhotoEditImportProperties : NSObject {
    double  _baseDuration;
    long long  _baseEXIFOrientation;
}

@property (nonatomic, readonly) double baseDuration;
@property (nonatomic, readonly) long long baseEXIFOrientation;

+ (id)importPropertiesWithEXIFOrientation:(long long)arg1;
+ (id)importPropertiesWithEXIFOrientation:(long long)arg1 duration:(double)arg2;

- (double)baseDuration;
- (long long)baseEXIFOrientation;

@end
