
@interface DEValidatorResult : NSObject {
    NSArray * _errors;
    NSString * _status;
    NSArray * _warnings;
}

@property (nonatomic, retain) NSArray *errors;
@property (nonatomic, retain) NSString *status;
@property (nonatomic, retain) NSArray *warnings;

- (void).cxx_destruct;
- (id)errors;
- (void)setErrors:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setWarnings:(id)arg1;
- (id)status;
- (id)warnings;

@end
