
@interface UITextPositionImpl : UITextPosition {
    WebVisiblePosition * _webVisiblePosition;
}

@property (nonatomic, retain) WebVisiblePosition *webVisiblePosition;

+ (id)wrapWebVisiblePosition:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (bool)isEqual:(id)arg1;
- (void)setWebVisiblePosition:(id)arg1;
- (id)webVisiblePosition;

@end
