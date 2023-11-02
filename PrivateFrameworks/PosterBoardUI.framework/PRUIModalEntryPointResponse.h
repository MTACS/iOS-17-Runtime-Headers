
@interface PRUIModalEntryPointResponse : NSObject <BSXPCSecureCoding, NSCopying, NSObject> {
    long long  _result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long result;
@property (readonly) Class superclass;

+ (id)cancel;
+ (id)done;
+ (bool)supportsBSXPCSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithResult:(long long)arg1;
- (long long)result;

@end
