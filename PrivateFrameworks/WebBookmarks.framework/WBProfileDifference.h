
@interface WBProfileDifference : NSObject {
    unsigned long long  _result;
    NSSet * _settingsKeys;
}

@property (nonatomic, readonly) unsigned long long result;
@property (nonatomic, readonly, copy) NSSet *settingsKeys;

- (void).cxx_destruct;
- (id)init;
- (id)initWithResult:(unsigned long long)arg1 settingsKeys:(id)arg2;
- (unsigned long long)result;
- (id)settingsKeys;

@end
