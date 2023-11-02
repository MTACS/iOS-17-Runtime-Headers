
@interface SASourceInfo : NSObject {
    unsigned int  _columnNum;
    NSString * _filePath;
    unsigned long long  _length;
    unsigned int  _lineNum;
    unsigned long long  _offsetIntoSegment;
}

@property (readonly) unsigned int columnNum;
@property (readonly) NSString *fileName;
@property (readonly) NSString *filePath;
@property (readonly) unsigned long long length;
@property (readonly) unsigned int lineNum;
@property (readonly) unsigned long long offsetIntoSegment;
@property (readonly) unsigned long long offsetIntoTextSegment;

- (void).cxx_destruct;
- (unsigned int)columnNum;
- (id)debugDescription;
- (id)fileName;
- (id)filePath;
- (unsigned long long)length;
- (unsigned int)lineNum;
- (unsigned long long)offsetIntoSegment;
- (unsigned long long)offsetIntoTextSegment;

@end
