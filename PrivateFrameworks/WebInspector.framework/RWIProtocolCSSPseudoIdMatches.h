
@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (nonatomic, copy) NSArray *matches;
@property (nonatomic) long long pseudoId;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (id)initWithPseudoId:(long long)arg1 matches:(id)arg2;
- (id)matches;
- (long long)pseudoId;
- (void)setMatches:(id)arg1;
- (void)setPseudoId:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)safe_initWithPseudoId:(long long)arg1 matches:(id)arg2;

@end
