
@interface DBDashboardSiriEntity : DBDashboardEntity {
    bool  _floating;
}

@property (getter=isFloating, nonatomic) bool floating;

+ (id)entity;

- (bool)isFloating;
- (bool)isSiriEntity;
- (void)setFloating:(bool)arg1;

@end
