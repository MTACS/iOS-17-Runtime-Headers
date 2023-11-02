
@interface _PSConfidenceModelArchive : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _confidenceModelDictionary;
}

@property (nonatomic, readonly) NSDictionary *confidenceModelDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)confidenceModelDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfidenceModelDictionary:(id)arg1;

@end
