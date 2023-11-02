
@protocol MCMCommand <NSObject>

@required

+ (unsigned long long)command;
+ (Class)incomingMessageClass;

- (void)execute;
- (id)initWithContext:(id <MCMCommandContext>)arg1 resultPromise:(id <MCMResultPromise>)arg2;

@end
