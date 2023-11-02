
@interface NEIKEv2CustomData : NSObject <NSCopying> {
    NSData * _customData;
    unsigned long long  _customType;
}

@property (retain) NSData *customData;
@property unsigned long long customType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customData;
- (unsigned long long)customType;
- (id)description;
- (void)setCustomData:(id)arg1;
- (void)setCustomType:(unsigned long long)arg1;

@end
