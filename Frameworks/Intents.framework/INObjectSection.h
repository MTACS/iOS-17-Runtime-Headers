
@interface INObjectSection : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    INImage * _image;
    NSArray * _items;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *_identifier;
@property (nonatomic, readonly) INImage *image;
@property (nonatomic, readonly, copy) NSArray *items;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_identifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 image:(id)arg4 items:(id)arg5;
- (id)initWithTitle:(id)arg1 items:(id)arg2;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 items:(id)arg4;
- (id)items;
- (id)subtitle;
- (id)title;

@end
