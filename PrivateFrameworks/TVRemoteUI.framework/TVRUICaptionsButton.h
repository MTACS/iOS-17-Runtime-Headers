
@interface TVRUICaptionsButton : TVRUIButton {
    bool  _captionsEnabled;
}

@property (nonatomic) bool captionsEnabled;

- (bool)captionsEnabled;
- (id)description;
- (id)initWithCaptionsEnabled:(bool)arg1;
- (void)layoutSubviews;
- (void)setCaptionsEnabled:(bool)arg1;

@end
