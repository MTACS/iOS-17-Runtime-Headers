
@interface HDHeartRateControlPoint : HDHealthServiceCharacteristic {
    unsigned char  _operation;
}

@property (nonatomic) unsigned char operation;

+ (id)uuid;

- (id)description;
- (id)getBinaryValueWithError:(id*)arg1;
- (id)initWithOperation:(unsigned char)arg1;
- (unsigned char)operation;
- (void)setOperation:(unsigned char)arg1;

@end
