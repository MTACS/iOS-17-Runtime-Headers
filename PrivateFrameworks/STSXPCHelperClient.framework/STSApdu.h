
@interface STSApdu : NSObject {
    unsigned char  _cls;
    unsigned char  _instruction;
    NSNumber * _le;
    unsigned char  _p1;
    unsigned char  _p2;
    NSData * _payload;
}

- (void).cxx_destruct;

@end
