
@interface StitchableInteraction : NSObject {
    double  _duration;
    NSString * _identifier;
    bool  _isDonatedBySiri;
    NSDate * _startDate;
    NSString * _type;
}

@property (readonly) double duration;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) bool isDonatedBySiri;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (double)duration;
- (id)identifier;
- (id)initWithType:(id)arg1 identifier:(id)arg2 startDate:(id)arg3 duration:(double)arg4 isDonatedBySiri:(bool)arg5;
- (bool)isDonatedBySiri;
- (id)startDate;
- (id)type;

@end
