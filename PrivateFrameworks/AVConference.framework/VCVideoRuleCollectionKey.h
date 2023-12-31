
@interface VCVideoRuleCollectionKey : NSObject <NSCopying> {
    unsigned char  _encodingType;
    int  _payload;
    unsigned char  _transportType;
}

@property (nonatomic, readonly) unsigned char encodingType;
@property (nonatomic, readonly) int payload;
@property (nonatomic, readonly) unsigned char transportType;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned char)encodingType;
- (unsigned long long)hash;
- (id)initWithPayload:(int)arg1 transportType:(unsigned char)arg2 encodingType:(unsigned char)arg3;
- (bool)isEqual:(id)arg1;
- (int)payload;
- (unsigned char)transportType;

@end
