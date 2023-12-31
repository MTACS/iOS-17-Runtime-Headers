
@interface NTKUserPhotoContentEditOption : NTKEditOption {
    bool  _isDefaultPhoto;
    NSString * _path;
}

@property (nonatomic, readonly) bool isDefaultPhoto;
@property (nonatomic, readonly) NSString *path;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDefaultPhoto;
- (id)path;

@end
