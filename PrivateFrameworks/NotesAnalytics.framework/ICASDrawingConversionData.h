
@interface ICASDrawingConversionData : NSObject <AADataEventType> {
    ICASConversionMethod * _conversionMethod;
}

@property (nonatomic, readonly) ICASConversionMethod *conversionMethod;

+ (id)dataName;

- (void).cxx_destruct;
- (id)conversionMethod;
- (id)initWithConversionMethod:(id)arg1;
- (id)toDict;

@end
