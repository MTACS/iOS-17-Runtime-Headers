
@interface CLSensorRecorderSensorMetaRequestById : NSObject <NSSecureCoding> {
    int  _dataType;
    unsigned long long  _identifier;
}

@property int dataType;
@property unsigned long long identifier;

+ (bool)supportsSecureCoding;

- (int)dataType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (void)setDataType:(int)arg1;
- (void)setIdentifier:(unsigned long long)arg1;

@end
