
@protocol ImageRowReading

@required

- (unsigned int)bytesPerPixel;
- (unsigned long long)height;
- (const char *)rowAtIndex:(unsigned int)arg1;
- (unsigned long long)width;

@end
