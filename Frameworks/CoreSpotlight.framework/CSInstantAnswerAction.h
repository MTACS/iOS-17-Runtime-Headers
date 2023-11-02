
@interface CSInstantAnswerAction : NSObject <NSCopying> {
    NSString * _type;
    NSString * _url;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *url;

+ (id)actionWithType:(id)arg1 andUrl:(id)arg2;

- (void).cxx_destruct;
- (id)attributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithAttributes:(id)arg1;
- (id)initWithType:(id)arg1 andUrl:(id)arg2;
- (void)setType:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)type;
- (id)url;

@end
