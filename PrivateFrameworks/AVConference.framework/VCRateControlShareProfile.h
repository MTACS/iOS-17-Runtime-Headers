
@interface VCRateControlShareProfile : NSObject <NSCopying> {
    unsigned int  _rateSharingCount;
    unsigned int  _reservedBitrate;
}

@property (nonatomic) unsigned int rateSharingCount;
@property (nonatomic) unsigned int reservedBitrate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)rateSharingCount;
- (unsigned int)reservedBitrate;
- (void)setRateSharingCount:(unsigned int)arg1;
- (void)setReservedBitrate:(unsigned int)arg1;

@end
