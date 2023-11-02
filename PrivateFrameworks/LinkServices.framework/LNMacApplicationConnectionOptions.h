
@interface LNMacApplicationConnectionOptions : LNConnectionOptions <LNApplicationConnectionOptions> {
    bool  _background;
}

@property (getter=isBackground, nonatomic) bool background;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isForeground;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (bool)isBackground;
- (bool)isEqual:(id)arg1;
- (bool)isForeground;
- (void)setBackground:(bool)arg1;

@end
