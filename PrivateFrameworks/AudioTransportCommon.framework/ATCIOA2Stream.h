
@interface ATCIOA2Stream : NSObject {
    NSArray * _availableFormats;
    IOKConnection * _connection;
    ATCIOA2StreamFormat * _currentFormat;
    unsigned long long  _index;
    bool  _input;
    unsigned int  _physicalID;
    IOKService * _service;
    unsigned int  _startingChannel;
}

@property (nonatomic, readonly, copy) NSArray *availableFormats;
@property (nonatomic, readonly, copy) ATCIOA2StreamFormat *currentFormat;
@property (getter=isInput, nonatomic, readonly) bool input;
@property (nonatomic, readonly) unsigned int startingChannel;

- (void).cxx_destruct;
- (id)availableFormats;
- (id)currentFormat;
- (id)initWithService:(id)arg1 connection:(id)arg2 index:(unsigned long long)arg3 input:(bool)arg4 description:(id)arg5;
- (bool)isInput;
- (unsigned int)startingChannel;

@end
