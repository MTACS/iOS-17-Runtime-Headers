
@interface AHTInterface : AHTCommon {
    unsigned char  _interfaceID;
}

@property (nonatomic, readonly) unsigned char interfaceID;

+ (id)allInterfaces;
+ (id)withName:(id)arg1;
+ (id)withService:(unsigned int)arg1;

- (id)description;
- (bool)getPower:(long long*)arg1;
- (bool)getReport:(unsigned char)arg1 withData:(id)arg2;
- (id)initWithService:(unsigned int)arg1;
- (unsigned char)interfaceID;
- (bool)reset;
- (bool)setEnable:(bool)arg1;
- (bool)setPower:(long long)arg1;
- (bool)setReport:(unsigned char)arg1 withData:(id)arg2;

@end
