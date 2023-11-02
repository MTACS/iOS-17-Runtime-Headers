
@interface NSEncodingDetector : NSObject {
    unsigned int  _cfEncoding;
    unsigned long long  _givenNumBytes;
    bool  _hasBOM;
    bool  _hasBase64;
    bool  _isBigEndian;
    unsigned long long  _mostFrqChars;
    unsigned long long  _nsEncoding;
    unsigned long long  _numBase64;
    unsigned long long  _numBigrams;
    unsigned long long  _numChars;
    unsigned long long  _numDirect;
    unsigned long long  _numHigher;
    unsigned long long  _numLower;
    unsigned long long  _numMultiByteChars;
    unsigned long long  _numRep;
    unsigned long long  _numSeq;
    unsigned long long  _numSingleBytechars;
    unsigned long long  _numTrigram;
    unsigned long long  _numZeroBytes;
    int (* _recognizeFunc;
    unsigned long long  _skipBytes;
    unsigned int  _tag;
    double  _weight;
}

@property (readonly) unsigned int cfEncoding;
@property (readonly) unsigned long long nsEncoding;

+ (id)detectorForCFStringEncoding:(unsigned int)arg1 allowBackupDetectors:(bool)arg2;
+ (int (*)recognizeFuncForCFStringEncoding:(unsigned int)arg1;

- (double)_ASCII_confidence;
- (double)_singleByte_confidence;
- (double)bytesRatio;
- (unsigned int)cfEncoding;
- (double)confidence;
- (double)confidenceWith2Chars;
- (id)initWithNSStringEncoding:(unsigned long long)arg1 CFStringEncoding:(unsigned int)arg2 recognizeFunc:(int (*)arg3;
- (unsigned long long)maxSkipBytes;
- (double)multiBytesRatio;
- (unsigned long long)nsEncoding;
- (unsigned long long)recognizeString:(const char *)arg1 withDataLength:(unsigned long long)arg2 intoBuffer:(id)arg3;
- (void)reset;
- (void)softReset;

@end
