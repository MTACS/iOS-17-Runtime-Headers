
@interface SUControllerDownload : NSObject <NSSecureCoding> {
    SUControllerDescriptor * _descriptor;
    SUControllerProgress * _progress;
}

@property (nonatomic, retain) SUControllerDescriptor *descriptor;
@property (nonatomic, retain) SUControllerProgress *progress;

+ (id)downloadWithDescriptor:(id)arg1 andProgress:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)descriptor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)progress;
- (void)setDescriptor:(id)arg1;
- (void)setProgress:(id)arg1;

@end
