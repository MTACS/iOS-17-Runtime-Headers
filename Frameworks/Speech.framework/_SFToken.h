
@interface _SFToken : NSObject <NSCopying> {
    double  _confidence;
    double  _duration;
    double  _startTime;
    NSString * _text;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double startTime;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)duration;
- (id)initWithText:(id)arg1 confidence:(double)arg2 startTime:(double)arg3 duration:(double)arg4;
- (double)startTime;
- (id)text;

@end
