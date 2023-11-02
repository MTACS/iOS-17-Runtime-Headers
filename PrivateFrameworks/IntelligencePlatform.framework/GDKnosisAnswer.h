
@interface GDKnosisAnswer : NSObject <NSSecureCoding> {
    NSString * _answerId;
    NSArray * _facts;
    NSString * _name;
    NSArray * _parents;
    NSArray * _requestIds;
}

@property (nonatomic, readonly, copy) NSString *answerId;
@property (nonatomic, readonly, copy) NSArray *facts;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSArray *parents;
@property (nonatomic, readonly, copy) NSArray *requestIds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)answerId;
- (void)encodeWithCoder:(id)arg1;
- (id)facts;
- (id)initWithAnswerId:(id)arg1 name:(id)arg2 facts:(id)arg3 parents:(id)arg4 requestIds:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)parents;
- (id)requestIds;

@end
