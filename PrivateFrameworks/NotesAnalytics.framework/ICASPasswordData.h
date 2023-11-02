
@interface ICASPasswordData : NSObject <AADataEventType> {
    NSNumber * _hasHint;
    ICASPasswordType * _passwordType;
}

@property (nonatomic, readonly) NSNumber *hasHint;
@property (nonatomic, readonly) ICASPasswordType *passwordType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)hasHint;
- (id)initWithPasswordType:(id)arg1 hasHint:(id)arg2;
- (id)passwordType;
- (id)toDict;

@end
