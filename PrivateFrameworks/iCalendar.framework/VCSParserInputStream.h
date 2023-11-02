
@interface VCSParserInputStream : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _buffer;
    int  _currentLineNum;
    NSData * _dataStream;
    bool  _discardBuffer;
    unsigned int  _seek;
}

- (void).cxx_destruct;
- (id)errorStr:(unsigned long long)arg1;
- (unsigned long long)getLine:(char *)arg1 withSize:(unsigned long long*)arg2;
- (id)initWithData:(id)arg1;
- (bool)isContinued;
- (int)lineNum;
- (unsigned long long)loadLineBuffer;

@end
