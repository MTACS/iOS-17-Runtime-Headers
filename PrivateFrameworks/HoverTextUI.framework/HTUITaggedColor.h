
@interface HTUITaggedColor : NSObject <NSSecureCoding> {
    UIColor * _color;
    NSString * _identifier;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) NSString *localizedName;

+ (id)color:(id)arg1 identifier:(id)arg2;
+ (id)makeFromData:(id)arg1;
+ (id)makeFromData:(id)arg1 withOpacity:(double)arg2;
+ (bool)supportsSecureCoding;
+ (id)userPickableColors;

- (void).cxx_destruct;
- (id)color;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedName;
- (void)setColor:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
