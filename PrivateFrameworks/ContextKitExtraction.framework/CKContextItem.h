
@interface CKContextItem : NSObject <NSCopying, NSSecureCoding> {
    NSString * _title;
    NSString * _topicId;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *topicId;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTopicId:(id)arg1;
- (id)title;
- (id)topicId;

@end
