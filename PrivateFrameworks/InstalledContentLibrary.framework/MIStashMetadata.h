
@interface MIStashMetadata : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _dateOriginallyInstalled;
    NSDate * _dateStashed;
}

@property (nonatomic, retain) NSDate *dateOriginallyInstalled;
@property (nonatomic, retain) NSDate *dateStashed;

+ (id)metadataFromURL:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateOriginallyInstalled;
- (id)dateStashed;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)serializeToURL:(id)arg1 error:(id*)arg2;
- (void)setDateOriginallyInstalled:(id)arg1;
- (void)setDateStashed:(id)arg1;

@end
