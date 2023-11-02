
@interface _UIStoryboardProxy : NSObject <NSSecureCoding> {
    UIStoryboard * _storyboard;
}

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoryboard:(id)arg1;

@end
