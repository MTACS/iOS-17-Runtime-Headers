
@interface _NSSharedKeySetS : NSObject <NSCopying> {
    unsigned int  _M;
    double  _c;
    unsigned char * _ckeys;
    unsigned int  _factor;
    char * _g;
    unsigned int  _keyLen;
    unsigned short * _keys1;
    unsigned short * _keys2;
    unsigned short * _keys3;
    unsigned int  _numKey;
    void * _rankTable;
    unsigned int * _seeds;
    unsigned char  _select;
    _NSSharedKeySetS * _subSharedKeySet;
    unsigned int  _type;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (unsigned long long)indexForBytes:(char *)arg1 length:(unsigned long long)arg2;
- (unsigned long long)indexForKey:(unsigned short*)arg1 length:(unsigned long long)arg2;
- (id)init;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;

@end
