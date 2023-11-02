
@interface MIDICIDeviceInfo : NSObject <NSSecureCoding> {
    NSData * _family;
    NSData * _manufacturerID;
    unsigned int  _midiDestination;
    NSData * _model;
    NSData * _revision;
}

@property (nonatomic, readonly) NSData *family;
@property (nonatomic, readonly) NSData *manufacturerID;
@property (nonatomic, readonly) unsigned int midiDestination;
@property (nonatomic, readonly) NSData *modelNumber;
@property (nonatomic, readonly) NSData *revisionLevel;

+ (id)description;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct MIDICIDeviceIdentification { unsigned char x1[3]; unsigned char x2[2]; unsigned char x3[2]; unsigned char x4[4]; unsigned char x5[5]; })asDeviceIDStruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)family;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestination:(unsigned int)arg1 deviceID:(struct MIDICIDeviceIdentification { unsigned char x1[3]; unsigned char x2[2]; unsigned char x3[2]; unsigned char x4[4]; unsigned char x5[5]; }*)arg2;
- (id)initWithDestination:(unsigned int)arg1 manufacturer:(id)arg2 family:(id)arg3 model:(id)arg4 revision:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)manufacturerID;
- (unsigned int)midiDestination;
- (id)modelNumber;
- (id)revisionLevel;

@end
