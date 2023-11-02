
@interface AVAssetSerializableCreationOptions : NSObject <NSSecureCoding> {
    NSDictionary * _creationOptions;
}

+ (bool)supportsSecureCoding;

- (id)creationOptions;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCreationOptions:(id)arg1;

@end
