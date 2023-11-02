
@protocol CPControlDelegate <NSObject>

@required

- (bool)control:(id <CPControl>)arg1 setEnabled:(bool)arg2;
- (bool)control:(id <CPControl>)arg1 setSelected:(bool)arg2;

@end
