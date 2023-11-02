
@interface LKAUpgradeOutcomeReport : NSObject {
    NSDictionary * _attributes;
    int  _outcome;
}

@property (retain) NSDictionary *attributes;
@property int outcome;

- (void).cxx_destruct;
- (id)attributes;
- (id)initWithOutcome:(int)arg1 attributes:(id)arg2;
- (int)outcome;
- (void)setAttributes:(id)arg1;
- (void)setOutcome:(int)arg1;

@end
