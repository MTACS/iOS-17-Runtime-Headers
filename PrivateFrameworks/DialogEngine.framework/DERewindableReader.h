
@interface DERewindableReader : NSObject <DEReader> {
    NSObject<DEReader> * _reader;
    NSMutableData * _rewindData;
    unsigned long long  _rewindOffset;
    bool  _rewound;
}

@property (nonatomic, retain) NSObject<DEReader> *reader;
@property (nonatomic, retain) NSMutableData *rewindData;
@property (nonatomic) unsigned long long rewindOffset;
@property (nonatomic) bool rewound;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (void)disableRewind;
- (id)init;
- (id)initWithReader:(id)arg1;
- (bool)isRewindable;
- (id)readData;
- (id)readDataOfLength:(unsigned long long)arg1;
- (id)reader;
- (bool)rewind;
- (id)rewindData;
- (unsigned long long)rewindOffset;
- (bool)rewound;
- (void)setReader:(id)arg1;
- (void)setRewindData:(id)arg1;
- (void)setRewindOffset:(unsigned long long)arg1;
- (void)setRewound:(bool)arg1;

@end
