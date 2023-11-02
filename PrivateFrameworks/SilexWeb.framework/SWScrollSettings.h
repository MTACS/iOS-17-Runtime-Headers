
@interface SWScrollSettings : NSObject {
    bool  _scrollEnabled;
    bool  _scrollsToTop;
    bool  _showsVerticalScrollIndicator;
}

@property (nonatomic, readonly) bool scrollEnabled;
@property (nonatomic, readonly) bool scrollsToTop;
@property (nonatomic, readonly) bool showsVerticalScrollIndicator;

- (id)initWithScrollEnabled:(bool)arg1 scrollsToTop:(bool)arg2 showsVerticalScrollIndicator:(bool)arg3;
- (bool)scrollEnabled;
- (bool)scrollsToTop;
- (bool)showsVerticalScrollIndicator;

@end
