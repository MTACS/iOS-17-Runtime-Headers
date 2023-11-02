
@interface _GEOConfigKeyHelper : NSObject <NSCopying> {
    NSNumber * _keyNumber;
    long long  _keySource;
    NSString * _keyString;
    id  _lastValue;
    struct { 
        unsigned int identifier; 
        void *metadata; 
    }  configKey;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;

@end
