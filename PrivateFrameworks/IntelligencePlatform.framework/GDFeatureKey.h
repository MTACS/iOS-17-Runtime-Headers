
@interface GDFeatureKey : NSObject <NSSecureCoding> {
    NSString * _featureName;
    NSString * _subidentifierName;
    NSString * _viewName;
}

@property (nonatomic, readonly) NSString *diagnosticDataString;
@property (nonatomic, readonly) NSString *featureName;
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly) NSString *subidentifierName;
@property (nonatomic, readonly) NSString *viewName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)diagnosticDataString;
- (void)encodeWithCoder:(id)arg1;
- (id)featureName;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewName:(id)arg1 featureName:(id)arg2 subidentifierName:(id)arg3;
- (id)string;
- (id)subidentifierName;
- (id)viewName;

@end
