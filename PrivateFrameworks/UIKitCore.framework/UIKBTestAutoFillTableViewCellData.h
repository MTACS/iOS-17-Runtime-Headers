
@interface UIKBTestAutoFillTableViewCellData : NSObject <NSCoding> {
    UITableViewCell * _cell;
    double  _height;
}

@property (nonatomic, readonly) UITableViewCell *cell;
@property (nonatomic, readonly) double height;

- (void).cxx_destruct;
- (id)cell;
- (void)encodeWithCoder:(id)arg1;
- (double)height;
- (id)initWithCell:(id)arg1 height:(double)arg2;
- (id)initWithCoder:(id)arg1;

@end
