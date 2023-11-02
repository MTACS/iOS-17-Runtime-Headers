
@interface UIKBAutoFillTestTableViewHeaderFooterData : NSObject <NSCoding> {
    UIView * _headerFooterView;
    double  _height;
    NSString * _title;
}

@property (nonatomic, readonly) UIView *headerFooterView;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)headerFooterView;
- (double)height;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 view:(id)arg2 height:(double)arg3;
- (id)title;

@end
