
@interface HDFitnessMachineCharacteristicField : NSObject {
    unsigned char  _correspondingFlagBit;
    unsigned char  _factor;
    unsigned char  _fieldLength;
    bool  _flagFieldFlipped;
    bool  _isSet;
}

@property (nonatomic, readonly) unsigned char correspondingFlagBit;
@property (nonatomic, readonly) unsigned char factor;
@property (nonatomic, readonly) unsigned char fieldLength;
@property (nonatomic) bool flagFieldFlipped;
@property (nonatomic) bool isSet;

- (unsigned char)correspondingFlagBit;
- (unsigned char)factor;
- (unsigned char)fieldLength;
- (bool)flagFieldFlipped;
- (id)initWithCorrespondingFlagBit:(unsigned char)arg1 fieldLength:(unsigned char)arg2 factor:(unsigned char)arg3;
- (bool)isIncludedInFlags:(unsigned int)arg1;
- (bool)isSet;
- (void)setFlagFieldFlipped:(bool)arg1;
- (void)setIsSet:(bool)arg1;
- (void)setValueWithBytes:(const char **)arg1 before:(const char *)arg2;
- (id)valueAsData;

@end
