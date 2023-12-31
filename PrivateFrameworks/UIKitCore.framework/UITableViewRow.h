
@interface UITableViewRow : NSObject <NSCoding> {
    UITableViewCell * _cell;
    double  _height;
    long long  _indentationLevel;
}

@property (nonatomic, retain) UITableViewCell *cell;
@property (nonatomic) double height;

+ (id)row;

- (void).cxx_destruct;
- (id)cell;
- (void)encodeWithCoder:(id)arg1;
- (double)height;
- (long long)indentationLevel;
- (id)initWithCoder:(id)arg1;
- (void)setCell:(id)arg1;
- (void)setHeight:(double)arg1;
- (void)setIndentationLevel:(long long)arg1;

@end
