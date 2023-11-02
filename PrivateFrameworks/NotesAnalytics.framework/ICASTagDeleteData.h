
@interface ICASTagDeleteData : NSObject <AADataEventType> {
    ICASTagDeleteApproach * _tagDeleteApproach;
}

@property (nonatomic, readonly) ICASTagDeleteApproach *tagDeleteApproach;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithTagDeleteApproach:(id)arg1;
- (id)tagDeleteApproach;
- (id)toDict;

@end
