
@interface CUINamedRecognitionImage : CUINamedLookup

@property (nonatomic, readonly) int exifOrientation;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } physicalSizeInMeters;

- (int)exifOrientation;
- (struct CGImage { }*)image;
- (id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3;
- (struct CGSize { double x1; double x2; })physicalSizeInMeters;

@end
