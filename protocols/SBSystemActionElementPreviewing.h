
@protocol SBSystemActionElementPreviewing <NSObject>

@required

- (bool)isExpanding;
- (bool)isPreviewing;
- (bool)isProminent;
- (bool)isUrgent;
- (void)pop;
- (void)setExpanding:(bool)arg1;
- (void)setPreviewing:(bool)arg1;
- (void)setProminent:(bool)arg1;
- (void)setUrgent:(bool)arg1;

@end
