
@interface ATXTimeFeedbackOption : NSObject <NSSecureCoding> {
    NSString * _identifier;
    bool  _isDestructive;
    NSString * _symbolName;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isDestructive;
@property (nonatomic, readonly, copy) NSString *symbolName;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 symbolName:(id)arg3 isDestructive:(bool)arg4;
- (bool)isDestructive;
- (id)symbolName;
- (id)title;

@end
