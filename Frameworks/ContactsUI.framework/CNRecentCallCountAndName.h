
@interface CNRecentCallCountAndName : NSObject {
    unsigned long long  _callCount;
    NSString * _speakableName;
}

@property (nonatomic, readonly) unsigned long long callCount;
@property (nonatomic, readonly) NSString *speakableName;

+ (id)instanceWithName:(id)arg1 callCount:(unsigned long long)arg2;

- (void).cxx_destruct;
- (unsigned long long)callCount;
- (id)speakableName;

@end
