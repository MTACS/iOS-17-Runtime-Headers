
@interface BPSTuple : NSObject <NSSecureCoding> {
    id  _first;
    id  _second;
}

@property (nonatomic, readonly) id first;
@property (nonatomic, readonly) id second;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)first;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirst:(id)arg1 second:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)second;

@end
