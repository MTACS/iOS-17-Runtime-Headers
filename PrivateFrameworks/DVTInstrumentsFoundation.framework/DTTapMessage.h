
@interface DTTapMessage : NSObject <NSSecureCoding> {
    NSMutableDictionary * _plist;
}

@property (nonatomic) int kind;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initAsKind:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (int)kind;
- (id)plist;
- (void)setKind:(int)arg1;

@end
