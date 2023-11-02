
@protocol ENXMLWriterDelegate <NSObject>

@required

- (void)xmlWriter:(ENXMLWriter *)arg1 didGenerateData:(NSData *)arg2;
- (void)xmlWriterDidEndWritingDocument:(ENXMLWriter *)arg1;

@end
