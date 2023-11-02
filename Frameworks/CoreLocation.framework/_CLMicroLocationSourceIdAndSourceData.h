
@interface _CLMicroLocationSourceIdAndSourceData : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _sourceData;
    NSString * _sourceIdsIdentifier;
}

@property (nonatomic, readonly, copy) NSArray *sourceData;
@property (nonatomic, readonly, copy) NSString *sourceIdsIdentifier;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIdsIdentifier:(id)arg1 sourceData:(id)arg2;
- (id)sourceData;
- (id)sourceIdsIdentifier;

@end
