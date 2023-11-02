
@interface MLParameterContainer : NSObject <NSSecureCoding> {
    NSMutableDictionary * _currentParameterValues;
    NSDictionary * _parameterDescriptions;
    NSArray * _parameterKeys;
}

@property (nonatomic, retain) NSMutableDictionary *currentParameterValues;
@property (nonatomic, retain) NSDictionary *parameterDescriptions;
@property (nonatomic, retain) NSArray *parameterKeys;

+ (id)parameterContainerFor:(id)arg1 descriptions:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentParameterValues;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)parameterDescriptions;
- (id)parameterKeys;
- (void)setCurrentParameterValues:(id)arg1;
- (bool)setCurrentValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setParameterDescriptions:(id)arg1;
- (void)setParameterKeys:(id)arg1;
- (bool)validateParameterValue:(id)arg1 givenConstraint:(id)arg2;

@end
