
@interface TSWPTab : NSObject <NSCopying> {
    int  _alignment;
    NSString * _leader;
    double  _position;
}

@property (nonatomic) int alignment;
@property (nonatomic, copy) NSString *leader;
@property (nonatomic) double position;

+ (id)displayStringFromTabLeader:(id)arg1;
+ (void)initialize;
+ (id)kTabStopAlignmentStringCenter;
+ (id)kTabStopAlignmentStringDecimal;
+ (id)kTabStopAlignmentStringLeft;
+ (id)kTabStopAlignmentStringRight;
+ (id)kTabStopDisplayStringArrow;
+ (id)kTabStopDisplayStringDash;
+ (id)kTabStopDisplayStringNone;
+ (id)kTabStopDisplayStringPoint;
+ (id)kTabStopDisplayStringUnderscore;
+ (id)kTabStopLeaderStringArrow;
+ (id)kTabStopLeaderStringArrowRTL;
+ (id)kTabStopLeaderStringDash;
+ (id)kTabStopLeaderStringPoint;
+ (id)kTabStopLeaderStringUnderscore;
+ (id)stringFromTabAlignment:(int)arg1 isRTL:(bool)arg2;
+ (id)tab;
+ (int)tabAlignmentFromString:(id)arg1 isRTL:(bool)arg2;
+ (id)tabLeaderFromDisplayString:(id)arg1;

- (int)alignment;
- (long long)compare:(id)arg1;
- (long long)compareToPosition:(double)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPosition:(double)arg1;
- (id)leader;
- (double)position;
- (double)positionInInches;
- (void)setAlignment:(int)arg1;
- (void)setLeader:(id)arg1;
- (void)setPosition:(double)arg1;
- (void)setPositionInInches:(double)arg1;

@end
