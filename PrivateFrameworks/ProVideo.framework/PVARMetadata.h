
@interface PVARMetadata : NSObject <NSSecureCoding> {
    ARFrame * _arFrame;
    AVDepthData * _depthData;
    int  _depthFreshness;
}

@property (nonatomic, readonly) ARFrame *arFrame;
@property (nonatomic, readonly) AVDepthData *depthData;
@property (nonatomic, readonly) int depthFreshness;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)arFrame;
- (id)depthData;
- (int)depthFreshness;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithARFrame:(id)arg1;
- (id)initWithARFrame:(id)arg1 depthData:(id)arg2 depthFreshness:(int)arg3;
- (id)initWithCoder:(id)arg1;

@end
