
@interface SGRe2PrefilterTree : NSObject {
    NSData * _data;
    const unsigned short * _h1;
    const unsigned short * _h2;
    const unsigned short * _h3;
    unsigned short  _n1;
    unsigned short  _n2;
    unsigned short  _n3;
    unsigned short  _nrpns;
    const unsigned short * _rpns;
    const char * _s1;
    const char * _s2;
    const char * _s3;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)regexpIdsThatMightMatchUtf8:(const char *)arg1;

@end
