
@interface RSTextCoachingSignal : NSObject <NSCopying> {
    float  _score;
    long long  _state;
    NSString * _text;
    long long  _type;
}

@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (float)score;
- (long long)state;
- (id)text;
- (long long)type;

@end
