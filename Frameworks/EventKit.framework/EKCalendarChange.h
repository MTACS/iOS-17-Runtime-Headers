
@interface EKCalendarChange : EKObjectChange {
    bool  _colorChanged;
    bool  _orderChanged;
    bool  _titleChanged;
}

@property (nonatomic, readonly) bool colorChanged;
@property (nonatomic, readonly) bool orderChanged;
@property (nonatomic, readonly) bool titleChanged;

+ (int)entityType;

- (bool)colorChanged;
- (id)initWithChangeProperties:(id)arg1;
- (bool)orderChanged;
- (bool)titleChanged;

@end
