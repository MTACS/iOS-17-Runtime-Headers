
@interface DSClientMotionDataOptions : NSObject {
    unsigned int  _dataSubType;
    unsigned int  _deviceType;
}

@property (nonatomic) unsigned int dataSubType;
@property (nonatomic) unsigned int deviceType;

- (unsigned int)dataSubType;
- (unsigned int)deviceType;
- (id)init;
- (void)setDataSubType:(unsigned int)arg1;
- (void)setDeviceType:(unsigned int)arg1;

@end
