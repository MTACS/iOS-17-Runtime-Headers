
@interface DEMultipartReader : NSObject <DEReader> {
    bool  _endOfMessage;
    NSData * _endOfMessageData;
    bool  _endOfPart;
    NSData * _endOfPartData;
    unsigned long long  _maxEndSize;
    NSData * _nextPartData;
    DERewindableReader * _reader;
    NSMutableData * _searchBuffer;
}

@property (nonatomic) bool endOfMessage;
@property (nonatomic, retain) NSData *endOfMessageData;
@property (nonatomic) bool endOfPart;
@property (nonatomic, retain) NSData *endOfPartData;
@property (nonatomic) unsigned long long maxEndSize;
@property (nonatomic, retain) NSData *nextPartData;
@property (nonatomic, retain) DERewindableReader *reader;
@property (nonatomic, retain) NSMutableData *searchBuffer;

+ (id)getEndOfMessageData;
+ (id)getEndOfPartData;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (bool)endOfMessage;
- (id)endOfMessageData;
- (bool)endOfPart;
- (id)endOfPartData;
- (unsigned long long)getAvailableLength;
- (id)init;
- (id)initWithReader:(id)arg1;
- (id)internalReadDataOfLength:(unsigned long long)arg1;
- (unsigned long long)maxEndSize;
- (bool)nextPart;
- (id)nextPartData;
- (id)readData;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)reader;
- (id)searchBuffer;
- (void)searchForEnd;
- (void)setEndOfMessage:(bool)arg1;
- (void)setEndOfMessageData:(id)arg1;
- (void)setEndOfPart:(bool)arg1;
- (void)setEndOfPartData:(id)arg1;
- (void)setMaxEndSize:(unsigned long long)arg1;
- (void)setNextPartData:(id)arg1;
- (void)setReader:(id)arg1;
- (void)setSearchBuffer:(id)arg1;

@end
