
@interface cTableColumn : NSObject {
    unsigned char  _aggregateType;
    bool  _aggregateUsed;
    unsigned short  _lengthOffset;
    bool  _lengthUsed;
    fullPropSpec * _propSpec;
    unsigned short  _statusOffset;
    bool  _statusUsed;
    unsigned int  _vType;
    unsigned short  _valueOffset;
    unsigned short  _valueSize;
    bool  _valueUsed;
}

@property unsigned char aggregateType;
@property bool aggregateUsed;
@property unsigned short lengthOffset;
@property bool lengthUsed;
@property (retain) fullPropSpec *propSpec;
@property unsigned short statusOffset;
@property bool statusUsed;
@property unsigned int vType;
@property unsigned short valueOffset;
@property unsigned short valueSize;
@property bool valueUsed;

- (void).cxx_destruct;
- (unsigned char)aggregateType;
- (bool)aggregateUsed;
- (id)initWithPropertyNumber:(int)arg1 WspCtx:(id)arg2;
- (unsigned short)lengthOffset;
- (bool)lengthUsed;
- (id)propSpec;
- (void)setAggregateType:(unsigned char)arg1;
- (void)setAggregateUsed:(bool)arg1;
- (void)setLengthOffset:(unsigned short)arg1;
- (void)setLengthUsed:(bool)arg1;
- (void)setPropSpec:(id)arg1;
- (void)setStatusOffset:(unsigned short)arg1;
- (void)setStatusUsed:(bool)arg1;
- (void)setVType:(unsigned int)arg1;
- (void)setValueOffset:(unsigned short)arg1;
- (void)setValueSize:(unsigned short)arg1;
- (void)setValueUsed:(bool)arg1;
- (unsigned short)statusOffset;
- (bool)statusUsed;
- (unsigned int)vType;
- (unsigned short)valueOffset;
- (unsigned short)valueSize;
- (bool)valueUsed;

@end
