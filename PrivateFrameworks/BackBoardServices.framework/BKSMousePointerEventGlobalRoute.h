
@interface BKSMousePointerEventGlobalRoute : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying, NSSecureCoding> {
    unsigned int  _contextID;
    BKSMousePointerGlobalContextOptions * _options;
}

@property (nonatomic, readonly) unsigned int contextID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BKSMousePointerGlobalContextOptions *options;
@property (readonly) Class superclass;

+ (id)build:(id /* block */)arg1;
+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendDescriptionToFormatter:(id)arg1;
- (unsigned int)contextID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)options;

@end
