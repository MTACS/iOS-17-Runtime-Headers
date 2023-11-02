
@interface CPVoiceControlState : NSObject <NSSecureCoding> {
    NSString * _identifier;
    UIImage * _image;
    bool  _repeats;
    NSArray * _titleVariants;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) bool repeats;
@property (nonatomic, readonly, copy) NSArray *titleVariants;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 titleVariants:(id)arg2 image:(id)arg3 repeats:(bool)arg4;
- (bool)repeats;
- (id)titleVariants;

@end
