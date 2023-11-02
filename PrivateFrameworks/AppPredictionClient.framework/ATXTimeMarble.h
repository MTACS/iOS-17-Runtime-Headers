
@interface ATXTimeMarble : NSObject <NSSecureCoding> {
    NSString * _colorName;
    NSDateComponents * _dateComponents;
    NSString * _symbolName;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *colorName;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly, copy) NSDateComponents *dateComponents;
@property (nonatomic, readonly, copy) NSString *symbolName;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)colorName;
- (id)date;
- (id)dateComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSymbolName:(id)arg1 colorName:(id)arg2 dateComponents:(id)arg3 title:(id)arg4;
- (id)symbolName;
- (id)title;

@end
