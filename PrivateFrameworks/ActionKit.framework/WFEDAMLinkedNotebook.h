
@interface WFEDAMLinkedNotebook : NSObject <NSSecureCoding> {
    NSString * _shareName;
}

@property (nonatomic, retain) NSString *shareName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShareName:(id)arg1;
- (id)shareName;

@end
