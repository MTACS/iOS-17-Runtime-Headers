
@interface UITextInputArrowKeyHistory : NSObject {
    bool  affinityDownstream;
    long long  amount;
    int  anchor;
    UITextPosition * cursor;
    UITextPosition * end;
    UITextPosition * start;
    UITextPosition * startPosition;
}

@property (nonatomic) bool affinityDownstream;
@property (nonatomic) long long amount;
@property (nonatomic) int anchor;
@property (nonatomic, retain) UITextPosition *cursor;
@property (nonatomic, retain) UITextPosition *end;
@property (nonatomic, retain) UITextPosition *start;
@property (nonatomic, retain) UITextPosition *startPosition;

- (void).cxx_destruct;
- (bool)affinityDownstream;
- (long long)amount;
- (int)anchor;
- (id)cursor;
- (id)end;
- (void)setAffinityDownstream:(bool)arg1;
- (void)setAmount:(long long)arg1;
- (void)setAnchor:(int)arg1;
- (void)setCursor:(id)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setStartPosition:(id)arg1;
- (id)start;
- (id)startPosition;

@end
