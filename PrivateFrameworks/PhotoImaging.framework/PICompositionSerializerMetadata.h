
@interface PICompositionSerializerMetadata : NSObject {
    long long  _height;
    long long  _orientation;
    long long  _width;
}

@property (nonatomic) long long height;
@property (nonatomic) long long orientation;
@property (nonatomic) long long width;

- (long long)height;
- (long long)orientation;
- (void)setHeight:(long long)arg1;
- (void)setOrientation:(long long)arg1;
- (void)setWidth:(long long)arg1;
- (long long)width;

@end
