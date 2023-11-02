
@protocol ARResultDataContext <NSObject>

@required

- (long long)cameraPosition;
- (ARImageData *)imageData;
- (NSArray *)resultDataOfClass:(Class)arg1;

@optional

- (NSArray *)anchorsToAdd;
- (NSArray *)anchorsToRemove;

@end
