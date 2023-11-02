
@interface EspressoDataFrameAttachment : NSObject {
    bool  _disabled;
    NSString * _filePath;
    unsigned long long  _offset;
    void * _rawPointer;
    unsigned long long  _size;
}

@property bool disabled;
@property (retain) NSString *filePath;
@property unsigned long long offset;
@property void*rawPointer;
@property unsigned long long size;

+ (id)fromDict:(id)arg1 frameStorage:(id)arg2;

- (void).cxx_destruct;
- (bool)disabled;
- (id)filePath;
- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;
- (unsigned long long)offset;
- (void*)rawPointer;
- (void)setDisabled:(bool)arg1;
- (void)setFilePath:(id)arg1;
- (void)setOffset:(unsigned long long)arg1;
- (void)setRawPointer:(void*)arg1;
- (void)setSize:(unsigned long long)arg1;
- (unsigned long long)size;

@end
