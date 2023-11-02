
@interface PCMapRoute : NSObject <NSCopying, NSSecureCoding> {
    PCMapLocation * _endLocation;
    bool  _hasEndLocation;
    PCMapLocation * _startLocation;
}

@property (nonatomic, retain) PCMapLocation *endLocation;
@property (nonatomic) bool hasEndLocation;
@property (nonatomic, retain) PCMapLocation *startLocation;

+ (id)decodeFromBlindChannelData:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)encodeAsBlindChannelData;
- (void)encodeWithCoder:(id)arg1;
- (id)endLocation;
- (bool)hasEndLocation;
- (id)initWithCoder:(id)arg1;
- (void)setEndLocation:(id)arg1;
- (void)setHasEndLocation:(bool)arg1;
- (void)setStartLocation:(id)arg1;
- (id)startLocation;

@end
