
@interface PKSharingMessageDisplayInformation : NSObject <NSSecureCoding> {
    NSURL * _imageURL;
    NSURL * _openGraphURL;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, retain) NSURL *openGraphURL;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 imageURL:(id)arg3 openGraphURL:(id)arg4;
- (id)openGraphURL;
- (void)setOpenGraphURL:(id)arg1;
- (id)subtitle;
- (id)title;

@end
