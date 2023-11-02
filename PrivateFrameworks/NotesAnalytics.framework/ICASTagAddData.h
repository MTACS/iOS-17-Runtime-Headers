
@interface ICASTagAddData : NSObject <AADataEventType> {
    NSNumber * _isAutoConversionEnabled;
    NSNumber * _isExistingTag;
    ICASTagAddApproach * _tagAddApproach;
}

@property (nonatomic, readonly) NSNumber *isAutoConversionEnabled;
@property (nonatomic, readonly) NSNumber *isExistingTag;
@property (nonatomic, readonly) ICASTagAddApproach *tagAddApproach;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithIsExistingTag:(id)arg1 tagAddApproach:(id)arg2 isAutoConversionEnabled:(id)arg3;
- (id)isAutoConversionEnabled;
- (id)isExistingTag;
- (id)tagAddApproach;
- (id)toDict;

@end
