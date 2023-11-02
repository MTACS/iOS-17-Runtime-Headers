
@interface TUCaption : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    NSString * _text;
}

@property (nonatomic) double confidence;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;
+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)archivedDataWithError:(id*)arg1;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCaption:(id)arg1;
- (id)initWithCaptionsToken:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCaption:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
