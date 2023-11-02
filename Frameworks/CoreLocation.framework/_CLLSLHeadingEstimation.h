
@interface _CLLSLHeadingEstimation : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _headings;
    int  _status;
}

@property (nonatomic, copy) NSArray *headings;
@property (nonatomic) int status;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)headings;
- (id)initWithCoder:(id)arg1;
- (void)setHeadings:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end
