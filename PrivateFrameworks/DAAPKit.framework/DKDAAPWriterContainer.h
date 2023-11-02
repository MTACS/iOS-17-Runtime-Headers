
@interface DKDAAPWriterContainer : NSObject {
    NSMutableData * _childData;
    unsigned int  _code;
}

@property (nonatomic, retain) NSMutableData *childData;
@property (nonatomic, readonly) unsigned int code;

- (void).cxx_destruct;
- (id)childData;
- (unsigned int)code;
- (id)formattedOutputData;
- (id)initWithCode:(unsigned int)arg1;
- (void)setChildData:(id)arg1;

@end
