
@interface SHSheetScrollingTest : NSObject <BSXPCSecureCoding> {
    id /* block */  _completionHandler;
    NSString * _name;
    long long  _type;
}

@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsBSXPCSecureCoding;

- (void).cxx_destruct;
- (id /* block */)completionHandler;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithName:(id)arg1 type:(long long)arg2 completionHandler:(id /* block */)arg3;
- (id)name;
- (long long)type;

@end
