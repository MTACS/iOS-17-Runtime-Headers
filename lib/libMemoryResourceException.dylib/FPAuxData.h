
@interface FPAuxData : NSObject <FPAuxDataType> {
    bool  _aggregate;
    id /* block */  _formatter;
    long long  _value;
}

@property (getter=shouldAggregate, nonatomic, readonly) bool aggregate;
@property (nonatomic, readonly) char *formattedValue;
@property (nonatomic, copy) id /* block */ formatter;
@property (nonatomic, readonly) bool isContainer;
@property (nonatomic, readonly) id jsonRepresentation;
@property (nonatomic, readonly) bool supportsFormattedValue;
@property (nonatomic, readonly) long long value;

- (void).cxx_destruct;
- (id)description;
- (char *)formattedValue;
- (id /* block */)formatter;
- (id)initWithValue:(long long)arg1 shouldAggregate:(bool)arg2;
- (bool)isContainer;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)setFormatter:(id /* block */)arg1;
- (bool)shouldAggregate;
- (bool)supportsFormattedValue;
- (long long)value;

@end
