
@interface SXTextComponentScrollPosition : SXComponentScrollPosition {
    long long  _characterIndex;
    double  _relativeTextOffset;
}

@property (nonatomic, readonly) long long characterIndex;
@property (nonatomic, readonly) double relativeTextOffset;

+ (bool)jsonDictionaryRepresentationIsValid:(id)arg1 exactly:(bool)arg2;
+ (bool)supportsSecureCoding;

- (long long)characterIndex;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponentIdentifier:(id)arg1 canvasWidth:(double)arg2 relativePageOffset:(double)arg3 characterIndex:(long long)arg4 relativeTextOffset:(double)arg5;
- (id)initWithDictionaryRepresentation:(id)arg1 exactly:(bool)arg2;
- (double)relativeTextOffset;

@end
