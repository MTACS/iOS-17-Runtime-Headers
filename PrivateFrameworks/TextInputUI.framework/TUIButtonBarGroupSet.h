
@interface TUIButtonBarGroupSet : NSObject {
    NSArray * _leadingButtonGroups;
    NSArray * _leadingSeparators;
    NSArray * _trailingButtonGroups;
    NSArray * _trailingSeparators;
    NSArray * _unifiedButtonGroups;
    NSArray * _unifiedSeparators;
}

@property (nonatomic, retain) NSArray *leadingButtonGroups;
@property (nonatomic, retain) NSArray *leadingSeparators;
@property (nonatomic, retain) NSArray *trailingButtonGroups;
@property (nonatomic, retain) NSArray *trailingSeparators;
@property (nonatomic, retain) NSArray *unifiedButtonGroups;
@property (nonatomic, retain) NSArray *unifiedSeparators;

- (void).cxx_destruct;
- (id)leadingButtonGroups;
- (id)leadingSeparators;
- (void)setLeadingButtonGroups:(id)arg1;
- (void)setLeadingSeparators:(id)arg1;
- (void)setTrailingButtonGroups:(id)arg1;
- (void)setTrailingSeparators:(id)arg1;
- (void)setUnifiedButtonGroups:(id)arg1;
- (void)setUnifiedSeparators:(id)arg1;
- (id)trailingButtonGroups;
- (id)trailingSeparators;
- (id)unifiedButtonGroups;
- (id)unifiedSeparators;

@end
