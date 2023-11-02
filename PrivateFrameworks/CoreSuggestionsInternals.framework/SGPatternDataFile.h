
@interface SGPatternDataFile : NSObject {
    NSData * _fileData;
}

- (void).cxx_destruct;
- (id)dataForOffset:(id)arg1;
- (id)dataForOffset:(id)arg1 includeTerminator:(int)arg2;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithPath:(id)arg1;

@end
