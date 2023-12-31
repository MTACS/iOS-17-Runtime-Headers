
@interface VCBitrateRule : NSObject {
    unsigned int  _bitrate;
    int  _connectionType;
    VCVideoRule * limitingRule;
}

@property unsigned int bitrate;
@property int connectionType;
@property (nonatomic, readonly) VCVideoRule *limitingRule;

- (unsigned int)bitrate;
- (long long)compare:(id)arg1;
- (int)connectionType;
- (void)dealloc;
- (id)description;
- (id)initWithBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;
- (id)limitingRule;
- (void)setBitrate:(unsigned int)arg1;
- (void)setConnectionType:(int)arg1;

@end
