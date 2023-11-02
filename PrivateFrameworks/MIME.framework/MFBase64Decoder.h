
@interface MFBase64Decoder : MFBaseFilterDataConsumer {
    bool  _bound;
    unsigned int  _decodedBits;
    unsigned long long  _equalCount;
    NSMutableData * _leftovers;
    const char * _table;
    unsigned long long  _validBytes;
}

@property (nonatomic) bool convertCommas;
@property (nonatomic) bool isBound;
@property (nonatomic, readonly) unsigned long long unconverted;

+ (bool)isValidBase64:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)_decodeBytes:(const char *)arg1 end:(const char *)arg2 into:(char *)arg3 length:(unsigned long long)arg4 startingAt:(unsigned long long)arg5 outEncodedOffset:(unsigned long long*)arg6;
- (long long)appendData:(id)arg1;
- (bool)convertCommas;
- (void)done;
- (id)initWithConsumers:(id)arg1;
- (bool)isBound;
- (void)setConvertCommas:(bool)arg1;
- (void)setIsBound:(bool)arg1;
- (unsigned long long)unconverted;

@end
