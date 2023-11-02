
@interface NSTextRange : NSObject {
    <NSTextLocation> * _endLocation;
    <NSTextLocation> * _location;
}

@property (getter=isEmpty, readonly) bool empty;
@property (readonly) <NSTextLocation> *endLocation;
@property (readonly) <NSTextLocation> *location;

+ (id)combineTextRanges:(id)arg1 withTextRanges:(id)arg2 usingOperator:(int)arg3;

- (bool)containsLocation:(id)arg1;
- (bool)containsRange:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (id)endLocation;
- (id)initWithLocation:(id)arg1;
- (id)initWithLocation:(id)arg1 endLocation:(id)arg2;
- (bool)intersectsWithTextRange:(id)arg1;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextRange:(id)arg1;
- (bool)isNotEmpty;
- (id)location;
- (id)terminator;
- (id)textRangeByFormingUnionWithTextRange:(id)arg1;
- (id)textRangeByIntersectingWithTextRange:(id)arg1;
- (id)textRangeWithAdjustment:(unsigned long long)arg1 rangeProvider:(id /* block */)arg2;

@end
