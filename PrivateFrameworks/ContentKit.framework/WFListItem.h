
@interface WFListItem : NSObject <NSSecureCoding> {
    WFImage * _image;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) WFImage *image;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3;
- (id)subtitle;
- (id)title;

@end
