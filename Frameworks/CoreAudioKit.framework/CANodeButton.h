
@interface CANodeButton : UIButton {
    NSURL * _url;
    bool  hasLabel;
}

@property bool hasLabel;
@property (retain) NSURL *url;

- (void)dealloc;
- (bool)hasLabel;
- (id)init;
- (void)layoutSubviews;
- (void)setHasLabel:(bool)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
