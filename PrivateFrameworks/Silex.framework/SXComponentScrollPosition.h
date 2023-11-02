
@interface SXComponentScrollPosition : SXScrollPosition {
    double  _canvasWidth;
    NSString * _componentIdentifier;
    double  _relativePageOffset;
}

@property (nonatomic, readonly) double canvasWidth;
@property (nonatomic, readonly, copy) NSString *componentIdentifier;
@property (nonatomic, readonly) double relativePageOffset;

+ (bool)jsonDictionaryRepresentationIsValid:(id)arg1 exactly:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)canvasWidth;
- (id)componentIdentifier;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponentIdentifier:(id)arg1 canvasWidth:(double)arg2 relativePageOffset:(double)arg3;
- (id)initWithDictionaryRepresentation:(id)arg1 exactly:(bool)arg2;
- (double)relativePageOffset;

@end
