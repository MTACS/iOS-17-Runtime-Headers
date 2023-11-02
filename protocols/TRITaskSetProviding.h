
@protocol TRITaskSetProviding

@required

- (NSSet *)XPCTaskAllowlist;
- (Class)taskClassForTaskType:(int)arg1;

@end
