
@interface CERecommendationStringTemplate : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _actionTitleTemplates;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDictionary * _messageTemplates;
    NSDictionary * _subTitleTemplates;
    NSDictionary * _titleTemplates;
}

@property (nonatomic, readonly) NSDictionary *actionTitleTemplates;
@property (nonatomic, readonly) NSDictionary *messageTemplates;
@property (nonatomic, readonly) NSDictionary *subTitleTemplates;
@property (nonatomic, readonly) NSDictionary *titleTemplates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionTitleTemplates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)messageTemplates;
- (id)subTitleTemplates;
- (id)titleTemplates;

@end
