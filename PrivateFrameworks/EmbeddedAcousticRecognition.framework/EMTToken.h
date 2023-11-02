
@interface EMTToken : NSObject <NSCopying> {
    float  _confidence;
    bool  _followedBySpace;
    bool  _precededBySpace;
    float  _score;
    NSString * _text;
}

@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) bool followedBySpace;
@property (nonatomic, readonly) bool precededBySpace;
@property (nonatomic, readonly) float score;
@property (nonatomic, readonly) NSString *text;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)followedBySpace;
- (unsigned long long)hash;
- (id)initWithText:(id)arg1 confidence:(float)arg2 precededBySpace:(bool)arg3 followedBySpace:(bool)arg4;
- (id)initWithText:(id)arg1 confidence:(float)arg2 score:(float)arg3 precededBySpace:(bool)arg4 followedBySpace:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)precededBySpace;
- (float)score;
- (id)text;

@end
