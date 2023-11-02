
@interface MADImageASTCFormatReader : NSObject {
    NSData * _dataStream;
    unsigned long long  _end;
    unsigned long long  _numImagesRemaining;
    NSDictionary * _plist;
    unsigned long long  _start;
}

+ (bool)isValidASTCExtension:(id)arg1;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (int)readDataToBuffer:(void*)arg1 Position:(unsigned long long)arg2 Length:(unsigned long long)arg3;
- (struct CGImageSource { }*)readNextImageSource;
- (struct CGImageSource { }*)readOneImageSource;
- (int)readPList;

@end
