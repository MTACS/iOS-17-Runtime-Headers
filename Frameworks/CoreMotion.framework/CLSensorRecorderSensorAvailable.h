
@interface CLSensorRecorderSensorAvailable : NSObject <NSSecureCoding> {
    int  _dataType;
}

@property int dataType;

+ (bool)supportsSecureCoding;

- (int)dataType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setDataType:(int)arg1;

@end
