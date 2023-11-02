
@interface ECMessageBodyStringAccumulator : NSObject <ECMessageBodyStringAccumulator> {
    NSMutableString * _accumulatedString;
    unsigned long long  _beforeLastEntity;
    bool  _isFull;
    unsigned long long  _lastCustomEntityTag;
    unsigned long long  _lastEntity;
    unsigned long long  _options;
    unsigned long long  _remainingLength;
}

@property (nonatomic, readonly) NSString *accumulatedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFull;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)accumulatedString;
- (void)appendCharacters:(const unsigned short*)arg1 length:(unsigned long long)arg2;
- (void)appendCustomEntityWithTag:(unsigned long long)arg1 stringRepresentation:(id)arg2;
- (void)appendInnerTextWithConsumableNode:(id)arg1;
- (void)appendNewline;
- (void)appendRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofString:(id)arg2;
- (void)appendString:(id)arg1;
- (id)debugDescription;
- (id)initWithOptions:(unsigned long long)arg1 lengthLimit:(unsigned long long)arg2;
- (bool)isFull;

@end
