
@protocol TXRDataSourceProvider <NSObject>

@required

- (TXRImageInfo *)provideImageInfoAtLevel:(unsigned long long)arg1 element:(unsigned long long)arg2 face:(unsigned long long)arg3;
- (TXRTextureInfo *)provideTextureInfo;

@end
