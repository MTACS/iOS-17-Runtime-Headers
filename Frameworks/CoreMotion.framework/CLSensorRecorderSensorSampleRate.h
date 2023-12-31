
@interface CLSensorRecorderSensorSampleRate : NSObject <NSSecureCoding> {
    int  _dataType;
    unsigned int  _rate;
}

@property int dataType;
@property unsigned int rate;

+ (bool)supportsSecureCoding;

- (int)dataType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned int)rate;
- (void)setDataType:(int)arg1;
- (void)setRate:(unsigned int)arg1;

@end
