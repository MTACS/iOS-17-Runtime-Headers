
@interface PCFxBlendOptions : NSObject <NSCopying> {
    int  _mode;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)getBlendMode;
- (id)initWithBlendOptions:(id)arg1;
- (void)setBlendMode:(int)arg1;

@end
