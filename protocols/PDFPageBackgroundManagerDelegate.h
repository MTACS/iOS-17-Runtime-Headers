
@protocol PDFPageBackgroundManagerDelegate

@required

- (UIImage *)backgroundImageForPage:(PDFPage *)arg1 withQuality:(int*)arg2;
- (PDFDocument *)document;
- (void)recieveBackgroundImage:(UIImage *)arg1 atBackgroundQuality:(int)arg2 forPage:(PDFPage *)arg3;

@end
