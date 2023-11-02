
@interface SRTrialParameter : NSObject {
    bool  _hasValueFromTrial;
    SRParameter * _parameter;
}

@property (nonatomic) bool hasValueFromTrial;
@property (nonatomic, readonly) SRParameter *parameter;

- (void).cxx_destruct;
- (id)description;
- (bool)hasValueFromTrial;
- (id)initWithParameter:(id)arg1;
- (id)parameter;
- (void)setHasValueFromTrial:(bool)arg1;

@end
