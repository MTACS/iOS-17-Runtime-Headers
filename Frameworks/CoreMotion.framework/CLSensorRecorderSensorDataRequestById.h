
@interface CLSensorRecorderSensorDataRequestById : NSObject <NSSecureCoding> {
    int  _dataType;
    unsigned long long  _identifier;
    unsigned long long  _metaIdentifier;
}

@property int dataType;
@property unsigned long long identifier;
@property unsigned long long metaIdentifier;

+ (bool)supportsSecureCoding;

- (int)dataType;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)metaIdentifier;
- (void)setDataType:(int)arg1;
- (void)setIdentifier:(unsigned long long)arg1;
- (void)setMetaIdentifier:(unsigned long long)arg1;

@end
