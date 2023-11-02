
@interface RUIActionSignal : NSObject {
    NSMutableArray * _subActions;
    unsigned long long  _topSignal;
}

@property (nonatomic, retain) NSMutableArray *subActions;
@property (nonatomic) unsigned long long topSignal;

+ (unsigned long long)signalTypeForString:(id)arg1;
+ (id)signalWithString:(id)arg1;
+ (id)signalWithType:(unsigned long long)arg1;
+ (id)stringForActionSignal:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)setSubActions:(id)arg1;
- (void)setTopSignal:(unsigned long long)arg1;
- (id)subActions;
- (unsigned long long)topSignal;

@end
