
@interface PQLQueryBuilder : NSObject {
    NSMutableArray * _parameters;
    unsigned char  _spec;
    short  _specLength;
    NSError * lastError;
}

@property (nonatomic, retain) NSError *lastError;

- (void).cxx_destruct;
- (id)bindBooleanParameter:(bool)arg1;
- (id)bindCharParameter:(BOOL)arg1;
- (id)bindDoubleParameter:(double)arg1;
- (id)bindIntegerParameter:(int)arg1;
- (id)bindLongParameter:(long long)arg1;
- (id)bindObjectParameter:(id)arg1;
- (id)bindParameter:(id)arg1 spec:(unsigned char)arg2;
- (id)bindShortParameter:(short)arg1;
- (id)bindStringParameter:(id)arg1;
- (id)bindUnsignedCharParameter:(unsigned char)arg1;
- (id)bindUnsignedIntegerParameter:(unsigned int)arg1;
- (id)bindUnsignedLongParameter:(unsigned long long)arg1;
- (id)bindUnsignedShortParameter:(unsigned short)arg1;
- (id)init;
- (id)lastError;
- (void)setLastError:(id)arg1;

@end
