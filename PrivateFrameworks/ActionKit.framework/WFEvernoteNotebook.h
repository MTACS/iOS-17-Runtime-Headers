
@interface WFEvernoteNotebook : NSObject <NSSecureCoding> {
    NSString * _guid;
    NSString * _name;
}

@property (nonatomic, copy) NSString *guid;
@property (nonatomic, copy) NSString *name;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)guid;
- (id)initWithCoder:(id)arg1;
- (id)initWithGUID:(id)arg1 name:(id)arg2;
- (id)initWithNotebook:(id)arg1;
- (id)name;
- (void)setGuid:(id)arg1;
- (void)setName:(id)arg1;

@end
