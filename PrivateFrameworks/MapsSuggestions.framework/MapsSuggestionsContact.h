
@interface MapsSuggestionsContact : NSObject <NSCopying, NSSecureCoding> {
    NSString * _handleValue;
}

@property (nonatomic, copy) NSString *handleValue;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handleValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandleValue:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setHandleValue:(id)arg1;

@end
