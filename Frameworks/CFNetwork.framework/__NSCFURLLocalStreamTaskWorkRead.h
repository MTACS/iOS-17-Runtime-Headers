
@interface __NSCFURLLocalStreamTaskWorkRead : __NSCFURLLocalStreamTaskWork {
    id /* block */  _completion;
    bool  _eof;
    unsigned int  _maxBytes;
    unsigned int  _minBytes;
    NSData * _readData;
}

- (void)dealloc;

@end
