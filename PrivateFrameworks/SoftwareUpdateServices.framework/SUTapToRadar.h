
@interface SUTapToRadar : NSObject {
    long long  _classification;
    long long  _componentID;
    NSString * _componentName;
    NSString * _componentVersion;
    NSString * _message;
    long long  _reproducibility;
    NSString * _title;
}

@property (nonatomic) long long classification;
@property (nonatomic) long long componentID;
@property (nonatomic, retain) NSString *componentName;
@property (nonatomic, retain) NSString *componentVersion;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) long long reproducibility;
@property (nonatomic, retain) NSString *title;

+ (id)_stringOfClassification:(long long)arg1;
+ (id)_stringOfReproducibility:(long long)arg1;

- (void).cxx_destruct;
- (long long)classification;
- (long long)componentID;
- (id)componentName;
- (id)componentVersion;
- (void)file;
- (id)init;
- (id)message;
- (long long)reproducibility;
- (void)setClassification:(long long)arg1;
- (void)setComponentID:(long long)arg1;
- (void)setComponentName:(id)arg1;
- (void)setComponentVersion:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setReproducibility:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
