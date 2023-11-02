
@interface USOSerializedUtteranceSpan : NSObject <NSSecureCoding> {
    unsigned int  _endIndex;
    int  _endMilliSeconds;
    unsigned int  _endUnicodeScalarIndex;
    unsigned int  _startIndex;
    int  _startMilliSeconds;
    unsigned int  _startUnicodeScalarIndex;
}

@property (readonly) unsigned int endIndex;
@property (readonly) int endMilliSeconds;
@property (readonly) unsigned int endUnicodeScalarIndex;
@property (readonly) unsigned int startIndex;
@property (readonly) int startMilliSeconds;
@property (readonly) unsigned int startUnicodeScalarIndex;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned int)endIndex;
- (int)endMilliSeconds;
- (unsigned int)endUnicodeScalarIndex;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 startUnicodeScalarIndex:(unsigned int)arg3 endUnicodeScalarIndex:(unsigned int)arg4;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 startUnicodeScalarIndex:(unsigned int)arg3 endUnicodeScalarIndex:(unsigned int)arg4 startMilliSeconds:(int)arg5 endMilliSeconds:(int)arg6;
- (unsigned int)startIndex;
- (int)startMilliSeconds;
- (unsigned int)startUnicodeScalarIndex;

@end
