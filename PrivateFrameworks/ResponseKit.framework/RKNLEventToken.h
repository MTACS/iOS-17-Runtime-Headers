
@interface RKNLEventToken : NSObject {
    long long  _length;
    long long  _location;
    NSString * _string;
    unsigned int  _tokenID;
}

@property long long length;
@property long long location;
@property (retain) NSString *string;
@property unsigned int tokenID;

- (void).cxx_destruct;
- (id)initWithString:(id)arg1 location:(long long)arg2 length:(long long)arg3;
- (long long)length;
- (long long)location;
- (void)setLength:(long long)arg1;
- (void)setLocation:(long long)arg1;
- (void)setString:(id)arg1;
- (void)setTokenID:(unsigned int)arg1;
- (id)string;
- (unsigned int)tokenID;

@end