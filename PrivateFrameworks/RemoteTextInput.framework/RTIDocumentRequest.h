
@interface RTIDocumentRequest : NSObject <NSCopying, NSSecureCoding> {
    bool  _didSetRectGranularity;
    long long  _flags;
    long long  _rectCountAfter;
    long long  _rectCountBefore;
    long long  _rectGranularity;
    long long  _surroundingGranularityCount;
    long long  _textGranularity;
}

@property (nonatomic) long long flags;
@property (nonatomic) long long rectCountAfter;
@property (nonatomic) long long rectCountBefore;
@property (nonatomic) long long rectGranularity;
@property (nonatomic) long long surroundingGranularityCount;
@property (nonatomic) long long textGranularity;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)flags;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)rectCountAfter;
- (long long)rectCountBefore;
- (long long)rectGranularity;
- (void)setFlags:(long long)arg1;
- (void)setRectCountAfter:(long long)arg1;
- (void)setRectCountBefore:(long long)arg1;
- (void)setRectGranularity:(long long)arg1;
- (void)setSurroundingGranularityCount:(long long)arg1;
- (void)setTextGranularity:(long long)arg1;
- (long long)surroundingGranularityCount;
- (long long)textGranularity;

@end
