
@interface TTSBoostRuleMatch : NSObject {
    long long  _boostRuleIndex;
    NSArray * _groupings;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSString * _rule;
}

@property (nonatomic) long long boostRuleIndex;
@property (nonatomic, retain) NSArray *groupings;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (nonatomic, retain) NSString *rule;

- (void).cxx_destruct;
- (long long)boostRuleIndex;
- (id)description;
- (id)groupings;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (id)rule;
- (void)setBoostRuleIndex:(long long)arg1;
- (void)setGroupings:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setRule:(id)arg1;

@end
