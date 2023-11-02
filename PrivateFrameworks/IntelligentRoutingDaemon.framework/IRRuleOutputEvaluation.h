
@interface IRRuleOutputEvaluation : NSObject {
    bool  _boolean;
    bool  _hasBoolean;
}

@property (nonatomic) bool boolean;
@property (nonatomic) bool hasBoolean;

- (bool)boolean;
- (bool)hasBoolean;
- (void)setBoolean:(bool)arg1;
- (void)setHasBoolean:(bool)arg1;

@end
