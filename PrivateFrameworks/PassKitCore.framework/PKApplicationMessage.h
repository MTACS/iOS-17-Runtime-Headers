
@interface PKApplicationMessage : NSObject <NSSecureCoding> {
    PKApplicationMessageContent * _content;
    PKApplicationMessageRegistration * _registration;
}

@property (nonatomic, readonly) PKApplicationMessageContent *content;
@property (nonatomic, readonly) PKApplicationMessageRegistration *registration;

+ (id)createLocalWithIdentifier:(id)arg1 createdDate:(id)arg2 priority:(unsigned long long)arg3 badge:(bool)arg4 content:(id)arg5;
+ (id)createWithRegistration:(id)arg1 content:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)registration;

@end
