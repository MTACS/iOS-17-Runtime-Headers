
@interface ICASResultData : NSObject <AADataEventType> {
    ICASResultType * _resultType;
}

@property (nonatomic, readonly) ICASResultType *resultType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithResultType:(id)arg1;
- (id)resultType;
- (id)toDict;

@end
