
@interface OABDrawable : NSObject

+ (id)readDrawableFromObject:(id)arg1 state:(id)arg2;
+ (id)readDrawableFromZipPackageData:(const struct CsData { unsigned int x1; char *x2; }*)arg1 foundInObject:(id)arg2 state:(id)arg3;
+ (id)readDrawablesFromContainer:(id)arg1 state:(id)arg2;
+ (void)setUpXmlDrawingState:(id)arg1 withBinaryReaderState:(id)arg2 targetDocument:(id)arg3 colorMap:(id)arg4;

@end
