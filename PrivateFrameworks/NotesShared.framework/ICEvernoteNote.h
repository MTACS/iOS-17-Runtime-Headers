
@interface ICEvernoteNote : NSObject <NSSecureCoding> {
    NSString * _content;
    NSDate * _created;
    NSArray * _resources;
    NSArray * _tags;
    NSString * _title;
    NSDate * _updated;
}

@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSDate *created;
@property (nonatomic, copy) NSArray *resources;
@property (nonatomic, copy) NSArray *tags;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSDate *updated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)created;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)resources;
- (void)setContent:(id)arg1;
- (void)setCreated:(id)arg1;
- (void)setResources:(id)arg1;
- (void)setTags:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUpdated:(id)arg1;
- (id)tags;
- (id)title;
- (id)updated;

@end
